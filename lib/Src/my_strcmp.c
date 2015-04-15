/*
** my_strcmp.c for my_strcmp in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:23:22 2014 Simon PERRIERE
** Last update Wed Dec 17 17:23:24 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  if (s1 == NULL || s2 == NULL
      || my_strlen(s1) < 0 || my_strlen(s2) < 0)
    return (-300);
  while (s1[i] == s2[i] && s1[i] != 0)
    {
      if (i++ < 0)
	return (-300);
    }
  i = s1[i] - s2[i];
  return (i);
}

int		my_strncmp(char *s1, char *s2, int n)
{
  int		i;

  i = 0;
  if (n < 0
      || s1 == NULL || s2 == NULL
      || my_strlen(s1) < 0 || my_strlen(s2) < 0)
    return (-300);
  while (n != 0 && i < (n - 1) && s1[i] == s2[i] && s1[i] != 0)
    {
      if (i++ < 0)
	return (-300);
    }
  if (n != 0)
    n = s1[i] - s2[i];
  return (n);
}

char		*my_strstr(char *buffer, char *to_find)
{
  int		i;
  int		size;
  int		match;

  i = 0;
  if (buffer == NULL || to_find == NULL
      || (size = (my_strlen(to_find))) < 0
      || (match = my_strlen(buffer)) < 0
      || size > match)
      return (NULL);
  match = 0;
  while (match != size && buffer[i] != 0)
    {
      if (buffer[i] == to_find[match])
	++match;
      else
	match = 0;
      ++i;
    }
  if (match != size)
    return (NULL);
  buffer = buffer + (i - match);
  return (buffer);
}

char		*my_strnstr(char *buffer, char *to_find, int n)
{
  int		i;
  int		size;
  int		match;

  i = 0;
  if (buffer == NULL || to_find == NULL || (size = (my_strlen(to_find))) < 0
      || (match = my_strlen(buffer)) < 0 || size > match || n < 0)
      return (NULL);
  match = 0;
  while (n != 0 && match != n && match != size && buffer[i] != 0)
    {
      if (buffer[i++] == to_find[match])
	++match;
      else
	match = 0;
    }
  if (match != size && match != n)
    {
      if ((i = my_strlen(buffer)) < 0)
	return (NULL);
      buffer = buffer + i;
    }
  else
    buffer = buffer + (i - match);
  return (buffer);
}

char		*my_find_char(char *buffer, char c, int pos)
{
  int		i;

  if (buffer == NULL || (i = my_strlen(buffer)) < 0 || c < CHAR_MIN
      || c >= CHAR_MAX_EXT || pos < 0 || i < pos)
    return (NULL);
  if (c == CHAR_MIN)
    return (buffer + i);
  i = 0;
  while (buffer[pos + i] != 0 && buffer[pos + i] != c)
    ++i;
  if (buffer[pos + i] != c)
    {
      if ((i = my_strlen(buffer)) < 0)
	return (NULL);
      buffer = buffer + i;
    }
  else
    buffer = buffer + pos + i;
  return (buffer);
}
