/*
** my_put_nbr.c for mu_put_nbr.c in /home/van-de_j/Ressource/Lib_en_c
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Mon Oct 20 10:31:43 2014 jessica van-den-zande
** Last update Tue Apr 14 14:30:02 2015 jessica van-den-zande
*/

#include "../lem.h"

int	my_put_nbr(int nb)
{
  int	r;
  int	div;

  div = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  while ((nb / div) >= 10)
    div = div * 10;
  while (div > 0)
    {
      r = (nb / div) % 10;
      my_putchar(r + 48);
      div = div / 10;
    }
  return (nb);
}

int	main()
{
  my_put_nbr (-42);
  return (0);
}
