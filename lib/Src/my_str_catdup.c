/*
** my_str_catdup.c for my_str_catdup in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:22:55 2014 Simon PERRIERE
** Last update Wed Dec 17 17:22:56 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

char		*my_str_catdup(char *src, char *to_add)
{
  int		size_d;
  int		i;
  char		*new_dest;

  if (src == NULL || to_add == NULL
      || (size_d = my_strlen(src)) < 0
      || (i = my_strlen(to_add)) < 0
      || (new_dest = malloc(sizeof(char) * (i + size_d + 1))) == NULL
      || (new_dest = my_strcpy(new_dest, src)) == NULL)
    return (NULL);
  i = 0;
  while (to_add[i] != 0)
    new_dest[size_d + i] = to_add[i++];
  new_dest[size_d + i] = 0;
  free(to_add);
  return (new_dest);
}

char		*my_str_fcatdup(char *src, char *to_add)
{
  int		size_d;
  int		i;
  char		*new_dest;

  if (src == NULL || to_add == NULL
      || (size_d = my_strlen(src)) < 0
      || (i = my_strlen(to_add)) < 0
      || (new_dest = malloc(sizeof(char) * (i + size_d + 1))) == NULL
      || (new_dest = my_strcpy(new_dest, src)) == NULL)
    return (NULL);
  i = 0;
  while (to_add[i] != 0)
    new_dest[size_d + i] = to_add[i++];
  new_dest[size_d + i] = 0;
  free(to_add);
  free(src);
  return (new_dest);
}

char		*my_str_ncatdup(char *src, char *to_add, int n)
{
  int		size_d;
  int		i;
  char		*new_dest;

  if (src == NULL || to_add == NULL || n < 0
      || (size_d = my_strlen(src)) < 0
      || (i = my_strlen(to_add)) < 0
      || (new_dest = malloc(sizeof(char) * (n + size_d + 1))) == NULL
      || (new_dest = my_strcpy(new_dest, src)) == NULL)
    return (NULL);
  i = 0;
  while (to_add[i] != 0 && i <= (n - 1))
    new_dest[size_d + i] = to_add[i++];
  new_dest[size_d + i] = 0;
  free(to_add);
  return (new_dest);
}

char		*my_str_lcatdup(char *src, char *to_add, int pos)
{
  int		size_d;
  int		i;
  char		*new_dest;

  if (src == NULL || to_add == NULL || pos < 0
      || (size_d = my_strlen(src)) < 0
      || (i = my_strlen(to_add)) < 0 || pos > i
      || (new_dest = malloc(sizeof(char) * ((i - pos) + size_d + 1))) == NULL
      || (new_dest = my_strcpy(new_dest, src)) == NULL)
    return (NULL);
  i = 0;
  while (to_add[pos + i] != 0)
    {
      new_dest[size_d + i] = to_add[pos + i];
      ++i;
    }
  new_dest[size_d + i] = 0;
  free(to_add);
  return (new_dest);
}

char		*my_str_lncatdup(char *src, char *to_add, int pos, int n)
{
  int		size_d;
  int		i;
  char		*new_dest;

  if (src == NULL || to_add == NULL || pos < 0
      || (size_d = my_strlen(src)) < 0
      || (i = my_strlen(to_add)) < 0 || pos > i
      || (new_dest = malloc(sizeof(char) * (n + size_d + 1))) == NULL
      || (new_dest = my_strcpy(new_dest, src)) == NULL)
    return (NULL);
  i = 0;
  while (to_add[pos + i] != 0 && (n - 1) >= i)
    {
      new_dest[size_d + i] = to_add[pos + i];
      ++i;
    }
  new_dest[size_d + i] = 0;
  free(to_add);
  return (new_dest);
}
