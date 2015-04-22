/*
** manage_file.c for manage_file in /home/van-de_j/rendu/Prog_Elem/CPE_2014_lemin
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Wed Apr 15 11:13:18 2015 jessica van-den-zande
** Last update Wed Apr 15 11:36:24 2015 jessica van-den-zande
*/

#include "lem.h"

int	open_read_file(char **av)
{
  int	fd;
  int	file;
  char	buff[4096];

  if ((fd = open(av[1], O_RDONLY)) == -1)
    return (my_putstr(2, "open failed or file doesn't exists.\n"));
  if ((file = read(fd, buff, BUFF_SIZE)) == -1)
    return (my_putstr(2, "read failed or file is empty.\n"));
  return (0);
}
