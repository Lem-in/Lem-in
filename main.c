/*
** main.c for main in /home/van-de_j/rendu/Prog_Elem/CPE_2014_lemin
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Apr 14 10:41:30 2015 jessica van-den-zande
** Last update Tue Apr 14 17:10:16 2015 jessica van-den-zande
*/

#include "lem.h"

int	main(int ac, char **av, char **env)
{
  if (check_arg(ac, av, env) == -1)
    return (my_putstr(2, "Error in main.\n"))
  return (0);
}
