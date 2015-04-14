/*
** my_putchar_error.c for my_putchar_error in /home/van-de_j/rendu/Prog_Elem/CPE_2014_bsq/lib
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Jan 13 13:31:39 2015 jessica van-den-zande
** Last update Tue Apr 14 14:31:33 2015 jessica van-den-zande
*/

#include "../lem.h"

int	my_putchar_error(char c)
{
  if ((write(2, &c, 1)) == -1)
    return (-1);
  return (0);
}
