/*
** lib.c for lem in /home/andre_n/rendu/CPE_2014_lemin/lem-in/2lem
**
** Made by nicolas ANDRE
** Login   <andre_n@epitech.net>
**
** Started on  Tue Apr 21 18:35:29 2015 nicolas ANDRE
** Last update Tue Apr 21 18:38:33 2015 nicolas ANDRE
*/

#include "lem.h"

int	len(char *str)
{
  int	i;

  i = 0;
  while (str[i++]);
  return (i - 1);
}

int	puterror(char *str)
{
  write(2, str, len(str));
  return (-1);
}

void	my_putstr(char *str)
{
  write(1, str, len(str));
}
