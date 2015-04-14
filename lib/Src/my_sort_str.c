/*
** my_sort_str.c for my_sort_str in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:22:05 2014 Simon PERRIERE
** Last update Wed Dec 17 17:22:06 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

char		*my_sort_ascii(char *str)
{
  int		i;
  int		j;
  char		c;

  i = 1;
  if (str == NULL)
    return (NULL);
  while (str[i] != 0)
    {
      if ((j = my_strlen(str)) < 0)
	return (NULL);
      --j;
      while (j >= i)
	{
	  if (str[j - 1] > str[j])
	    {
	      c = str[j - 1];
	      str[j - 1] = str[j];
	      str[j] = c;
	    }
	  --j;
	}
      ++i;
    }
  return (str);
}

char		*my_sort_invascii(char *str)
{
  int		i;
  int		j;
  char		c;

  i = 1;
  if (str == NULL)
    return (NULL);
  while (str[i] != 0)
    {
      if ((j = my_strlen(str)) < 0)
	return (NULL);
      --j;
      while (j >= i)
	{
	  if (str[j - 1] < str[j])
	    {
	      c = str[j - 1];
	      str[j - 1] = str[j];
	      str[j] = c;
	    }
	  --j;
	}
      ++i;
    }
  return (str);
}

char		*my_revstr(char *str)
{
  char		c;
  int		size;
  int		end;
  int		begin;

  begin = 0;
  if (str == NULL || (size = my_strlen(str)) < 0)
    return (NULL);
  end = size - 1;
  size = size / 2;
  while (begin < size)
    {
      c = str[begin];
      str[begin] = str[end];
      str[end--] = c;
      ++begin;
    }
  return (str);
}
