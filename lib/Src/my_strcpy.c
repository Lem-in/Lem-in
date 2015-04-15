/*
** my_strcpy.c for my_strcpy in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:23:47 2014 Simon PERRIERE
** Last update Wed Dec 17 17:23:48 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

char		*my_strcpy(char *dest, char *src)
{
  int		i;

  i = 0;
  if (dest == NULL || src == NULL || my_strlen(src) < 0)
    return (NULL);
  while (src[i] != 0)
    dest[i] = src[i++];
  dest[i] = 0;
  return (dest);
}

char		*my_strncpy(char *dest, char *src, int n)
{
  int		i;

  i = 0;
  if (n < 0 || dest == NULL || src == NULL || my_strlen(src) < 0)
    return (NULL);
  while (n - 1 >= i && src[i] != 0)
    dest[i] = src[i++];
  dest[i] = 0;
  return (dest);
}

char		*my_strlcpy(char *dest, char *src, int pos)
{
  int		i;

  if (dest == NULL || src == NULL || (i = my_strlen(src)) < 0
      || pos < 0 || i < pos)
    return (NULL);
  i = 0;
  while (src[pos + i] != 0)
    {
      dest[i] = src[pos + i];
      ++i;
    }
  dest[i] = 0;
  return (dest);
}

char		*my_strlncpy(char *dest, char *src, int pos, int n)
{
  int		i;

  if (dest == NULL || src == NULL || (i = my_strlen(src)) < 0
      || pos < 0 || i < pos || n < 0)
    return (NULL);
  i = 0;
  while (n - 1 >= i && src[pos + i] != 0)
    {
      dest[i] = src[pos + i];
      ++i;
    }
  dest[i] = 0;
  return (dest);
}
