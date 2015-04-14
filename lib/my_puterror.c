/*
** my_puterror.c for lemin in /home/andre_n/rendu/CPE_2014_lemin/lib
**
** Made by nicolas ANDRE
** Login   <andre_n@epitech.net>
**
** Started on  Tue Apr 14 11:37:29 2015 nicolas ANDRE
** Last update Tue Apr 14 14:31:51 2015 jessica van-den-zande
*/

#include "../lem.h"

int	my_puterror(char *str)
{
  if ((write(2, str, my_strlen(str))) == -1)
    return (write(2, "Bad write.\n", 11));
  return (-1);
}
