/*
** nb_fourmi.c for lem in /home/andre_n/rendu/CPE_2014_lemin/lem-in/2lem
**
** Made by nicolas ANDRE
** Login   <andre_n@epitech.net>
**
** Started on  Wed Apr 22 09:23:01 2015 nicolas ANDRE
** Last update Wed Apr 22 09:23:53 2015 nicolas ANDRE
*/

#include "lem.h"

int	nb_fourmi(int nb)
{
  int	nb_fourmi;

  if (nb <= 0)
    {
      puts("pas de fourmi ou trop de fourmi.\n");
      exit (0);
    }
  else if (nb > 0)
    {
      nb_fourmi = nb;
      return ((nb_fourmi));
    }
  return (0);
}
