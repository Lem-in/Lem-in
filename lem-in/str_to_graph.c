/*
** str_to_graph.c for boosttrap in /home/andre_n/rendu/lem-in
**
** Made by nicolas ANDRE
** Login   <andre_n@epitech.net>
**
** Started on  Thu Apr  2 15:14:15 2015 nicolas ANDRE
** Last update Thu Apr  2 16:49:08 2015 nicolas ANDRE
*/

#include <stdio.h>

int	len(char *str)
{
  int	i;

  i = 0;
  while (str[i++]);
  return (i - 1);
}

void	my_str(char *str)
{
  write (1, str, len(str));
}

int	my_str_error(char *str)
{
  write (2, str, len(str));
  return (-1);
}

void	str_to_graph(int x, char *str)
{
}

int	main(int ac, char **av)
{
  int	i;

  i = 0;
  if (ac < 2)
    return (my_str_error("error d'argument.\n"));
  while (i <= ac)
    my_str_to_word_tab(av[1]);
  return (0);
}
