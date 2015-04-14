/*
** my_putstr.c for my_putstr in /home/van-de_j/rendu/Prog_Elem/CPE_2014_bsq/lib
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Jan 13 12:53:28 2015 jessica van-den-zande
** Last update Tue Apr 14 14:30:59 2015 jessica van-den-zande
*/

#include "../lem.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((my_putchar(str[i]) == -1))
	{
	  my_putstr_error("my_putchar failed\n");
	  return (-1);
	}
      i++;
    }
  return (0);
}
