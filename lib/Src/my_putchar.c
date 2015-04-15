/*
** my_putchar.c for my_putchar in /home/van-de_j/rendu/Prog_Elem/CPE_2014_lemin/lib/Src
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Apr 14 17:52:13 2015 jessica van-den-zande
** Last update Tue Apr 14 18:00:29 2015 jessica van-den-zande
*/

#include "../Inc/my_lib.h"

int	my_putchar(int fd, char c)
{
  if (fd < 0 || c < CHAR_MIN || c >= CHAR_MAX || write(fd, &c, 1) != 1)
    return (-1);
  return (1);
}
