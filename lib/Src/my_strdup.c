/*
** my_strdup.c for my_strdup in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:24:13 2014 Simon PERRIERE
** Last update Wed Dec 17 17:24:14 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

char		*my_strdup(char *str)
{
  char		*dup;

  if (str == NULL
      || (dup = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL
      || (dup = my_strcpy(dup, str)) == NULL)
    return (NULL);
  return (dup);
}

char		*my_strfdup(char *str)
{
  char		*dup;

  if (str == NULL
      || (dup = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL
      || (dup = my_strcpy(dup, str)) == NULL)
    return (NULL);
  free(str);
  return (dup);
}

char		*my_strndup(char *str, int n)
{
  char		*dup;

  if (str == NULL
      || my_strlen(str) < 0 || n < 0
      || (dup = malloc(sizeof(char) * (n + 1))) == NULL
      || (dup = my_strncpy(dup, str, n)) == NULL)
    return (NULL);
  return (dup);
}

char		*my_strldup(char *str, int pos)
{
  int		i;
  char		*dup;

  if (str == NULL
      || (i = my_strlen(str)) < 0 || pos < 0 || i < pos
      || (dup = malloc(sizeof(char) * (i - pos + 1))) == NULL
      || (dup = my_strlcpy(dup, str, pos)) == NULL)
    return (NULL);
  return (dup);
}

char		*my_strlndup(char *str, int pos, int n)
{
  int		i;
  char		*dup;

  if (str == NULL
      || (i = my_strlen(str)) < 0 || pos < 0 || i < pos || n < 0
      || (dup = malloc(sizeof(char) * (n + 1))) == NULL
      || (dup = my_strlncpy(dup, str, pos, n)) == NULL)
    return (NULL);
  return (dup);
}
