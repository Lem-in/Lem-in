/*
** my_read.c for my_read in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:21:38 2014 Simon PERRIERE
** Last update Wed Dec 17 17:21:41 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

char		*my_read(int fd, char *buffer, int size)
{
  int		sread;
  int		len;

  if (size > MEMORY_CAP || size <= 0)
    size = SREAD;
  if ((buffer == NULL && (buffer = malloc(sizeof(char) * (size + 1))) == NULL)
      || fd < 0 || (sread = read(fd, buffer, size)) < 0)
    return (NULL);
  buffer[sread] = 0;
  if ((len = my_strlen(buffer)) < 0 || len != sread)
    return (NULL);
  return (buffer);
}

char		*my_read_dup(int fd, int size)
{
  char		*buffer;

  buffer = NULL;
  if (fd < 0 || (buffer = my_read(fd, buffer, size)) == NULL)
    return (NULL);
  return (buffer);
}

char		*my_read_catdup(int fd, char *buffer, int size)
{
  char		*buffer_add;
  int		sread;
  int		len;

  len = 0;
  if (size > MEMORY_CAP || size <= 0)
    size = SREAD;
  if (buffer != NULL && (len = my_strlen(buffer)) < 0)
    return (NULL);
  if (buffer != NULL && (size + len) > MEMORY_CAP && len >= MEMORY_CAP)
    return (buffer);
  if ((size + len) > MEMORY_CAP)
    size = MEMORY_CAP - len;
  if ((buffer != NULL && (buffer_add = my_read_dup(fd, size)) == NULL)
      || (buffer == NULL && (buffer = my_read_dup(fd, size)) == NULL)
      || (buffer_add != NULL
	  && (buffer = my_str_fcatdup(buffer, buffer_add)) == NULL))
    return (NULL);
  return (buffer);
}

char		*my_readline(int fd, char *buffer, int size)
{
  char		*prev;
  int		exit;
  int		len;

  len = 0;
  exit = 0;
  prev = NULL;
  if (fd < 0 || (buffer == NULL && (buffer = my_read_dup(fd, size)) == NULL))
    return (NULL);
  while (exit != 1 && my_strcmp(prev, buffer) != 0)
    {
      if ((exit = my_check_line(prev, buffer)) < 0)
	return (NULL);
      if (prev != NULL)
	{
	  free(prev);
	  prev = NULL;
	}
      if (exit != 1
	  && ((prev = my_strdup(buffer)) == NULL
	      || (buffer = my_read_catdup(fd, buffer, size)) == NULL
	      || (exit = my_check_line(prev, buffer)) < 0))
	return (NULL);
    }
  return (buffer);
}

int		my_check_line(char *prev, char *current)
{
  int		p_len;
  int		c_len;
  int		line_size;

  p_len = 0;
  if (current == NULL || (c_len = my_strlen(current)) < 0
      || (prev != NULL && (p_len = my_strlen(prev)) < 0)
      || (line_size = my_len_line(current)) < 0 || p_len > c_len)
    return (-1);
  if (((p_len == c_len && my_strcmp(prev, current) == 0) && p_len != 0)
      || line_size < c_len)
    return (1);
  else if (p_len < c_len || c_len == 0)
    return (0);
  return (-1);
}
