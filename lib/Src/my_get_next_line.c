/*
** my_get_next_line.c for my_get_next_line in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:14:20 2014 Simon PERRIERE
** Last update Wed Dec 17 17:14:22 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

char		*my_cut_line(char *str)
{
  char		*buffer;
  int		len;
  int		i;

  if (str == NULL || (len = my_len_line(str)) < 0 || (i = my_strlen(str)) < 0)
    return (NULL);
  if ((str[len] == 0 || str[len + 1] == 0)
      && (buffer = my_strdup(BLANK)) == NULL)
    return (NULL);
  else if ((buffer = my_strldup(str, ++len)) == NULL)
    return (NULL);
  free(str);
  return (buffer);
}

char		*my_get_line(char *str)
{
  char		*line;
  int		len;

  line = NULL;
  if (str == NULL || (len = my_len_line(str)) < 0
      || (line = my_strndup(str, len)) == NULL)
    return (NULL);
  return (line);
}

char		*my_get_next_line(int fd)
{
  static char	*buffer;
  char		*line;
  int		i;

  if ((buffer == NULL && (buffer = my_read_dup(fd, SREAD)) == NULL)
      || (i = my_check_line(BLANK, buffer)) < 0 || fd < 0)
    return (NULL);
  while (i != 1)
    {
      if ((line = my_strdup(buffer)) == NULL
	  || (i == 0 && (buffer = my_readline(fd, buffer, SREAD)) == NULL)
	  || (i = my_check_line(line, buffer)) < 0)
	return (NULL);
      if (i == 0 && my_strcmp(buffer, line) == 0)
	{
	  free(buffer);
	  return (NULL);
	}
      free(line);
    }
  if ((line = my_get_line(buffer)) == NULL
      || (buffer = my_cut_line(buffer)) == NULL
      || (i = my_strlen(buffer)) < 0)
    return (NULL);
  return (line);
}
