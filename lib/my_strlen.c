/*
** my_strlen.c for my_strlen.c in /home/van-de_j/rendu/Piscine_C_J04
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Thu Oct  2 19:12:29 2014 jessica van-den-zande
** Last update Tue Apr 14 14:31:15 2015 jessica van-den-zande
*/

#include "../lem.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (*str < 0)
    return (write(2, "Bad str.\n", 9));
  while (str[i++]);
  return (i - 1);
}
