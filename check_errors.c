/*
** check_error.c for check_error in /home/van-de_j/rendu/Prog_Elem/CPE_2014_lemin
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Apr 14 08:59:26 2015 jessica van-den-zande
** Last update Wed Apr 15 11:43:05 2015 jessica van-den-zande
*/

#include "lem.h"
#include "lib/Inc/my_lib.h"

int	check_arg(int ac, char **av, char **env)
{
  if (env[0] == NULL)
    {
      my_putstr(2, "Bad environnement.\n");
      return (-1);
    }
  if (ac == 1)
    {
      my_putstr(2, "It needs the config file.\n");
      return (-1);
    }
  return (0);
}
