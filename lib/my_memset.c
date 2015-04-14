/*
** my_memset.c for memset in /home/van-de_j/Ressource
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Wed Jan  7 11:38:49 2015 jessica van-den-zande
** Last update Tue Apr 14 14:29:49 2015 jessica van-den-zande
*/

#include "../lem.h"

void	*my_memset(char *str, int c, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      str[i] = c;
      i++;
    }
}
