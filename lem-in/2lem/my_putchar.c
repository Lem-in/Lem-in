/*
** my_putchar.c for my_putchar in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:19:35 2014 Simon PERRIERE
** Last update Tue Apr 14 18:00:31 2015 jessica van-den-zande
*/

#include "../../lib/Inc/my_lib.h"

int		my_putchar(int fd, char c)
{
  if (fd < 0 || c < CHAR_MIN || c >= CHAR_MAX || write(fd, &c, 1) != 1)
    return (-1);
  return (1);
}

int		my_put_printchar(int fd, char c)
{
  if (fd < 0 || c < CHAR_PRINT_MIN || c >= CHAR_PRINT_MAX
      || write(fd, &c, 1) != 1)
    return (-1);
  return (1);
}

int		my_put_extchar(int fd, char c)
{
  if (fd < 0 || c < CHAR_MIN || c >= CHAR_MAX_EXT || write(fd, &c, 1) != 1)
    return (-1);
  return (1);
}

int		my_put_uprintchar(int fd, char c)
{
  if (fd < 0 || c < CHAR_MIN || c >= CHAR_MAX_EXT)
    return (-1);
  if (c < CHAR_PRINT_MIN || c >= CHAR_PRINT_MAX)
    {
      if ((my_putchar(fd, 92) < 0)
	  || ((c < 8 && c > 0)
	      && (my_putstr(fd, "00") < 0
		  || my_put_unbrbase(fd, (int) c, OCTAL) < 0))
	  || ((c >= 8 && c < CHAR_PRINT_MIN)
	      && (my_putchar(fd, '0') < 0
		  || my_put_unbrbase(fd, (int) c, OCTAL) < 0))
	  || (c >= 127 && my_put_unbrbase(fd, (int) c, OCTAL) < 0))
	return (-1);
    }
  else if (my_putchar(fd, c) < 0)
    return (-1);
  return (1);
}
