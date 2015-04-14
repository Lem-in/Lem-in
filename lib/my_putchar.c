/*
** my_putchar.c for my_putchar in /home/van-de_j/rendu/Prog_Elem/CPE_2014_bsq/lib
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Jan 13 12:49:29 2015 jessica van-den-zande
** Last update Tue Apr 14 14:31:26 2015 jessica van-den-zande
*/

#include "../lem.h"

int	my_putchar(char c)
{
 if  ((write(1, &c, 1)) == -1)
   return (-1);
 return (0);
}
