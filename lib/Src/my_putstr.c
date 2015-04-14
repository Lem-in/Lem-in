/*
** my_putstr.c for my_putstr in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:20:52 2014 Simon PERRIERE
** Last update Wed Dec 17 17:20:54 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

int		my_putstr(int fd, char *str)
{
  int		i;

  if (fd < 0 || str == NULL || (i = my_strlen(str)) < 0
      || (i != 0 && write(fd, str, i) < 0))
    return (-1);
  return (1);
}

int		my_put_ustr(int fd, char *str)
{
  int		i;

  i = 0;
  if (fd < 0 || str == NULL || my_strlen(str) < 0)
    return (-1);
  while (str[i] != 0)
    {
      if ((str[i] < CHAR_MIN || str[i] >= CHAR_MAX_EXT)
	  || ((str[i] < CHAR_PRINT_MIN || str[i] >= CHAR_PRINT_MAX)
	      && my_put_uprintchar(fd, str[i]) < 0)
	  || ((str[i] >= CHAR_PRINT_MIN && str[i] < CHAR_PRINT_MAX)
	      && my_putchar(fd, str[i]) < 0))
	return (-1);
      ++i;
    }
  return (1);
}

int		my_put_line(int fd, char *str)
{
  int		i;

  if (fd < 0 || str == NULL || (i = my_len_line(str)) < 0
      || (i != 0 && write(fd, str, i) < 0))
    return (-1);
  return (1);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  if (str == NULL)
    return (-1);
  while (str[i] != 0)
    {
      if (++i < 0)
	return (-1);
    }
  return (i);
}

int		my_len_line(char *str)
{
  int		i;

  i = 0;
  if (str == NULL)
    return (-1);
  while (str[i] != 0 && str[i] != 10)
    {
      if (++i < 0)
	return (-1);
    }
  return (i);
}
