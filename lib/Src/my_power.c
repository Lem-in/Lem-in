/*
** my_power.c for my_power in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:14:42 2014 Simon PERRIERE
** Last update Wed Dec 17 17:14:45 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

int		my_long_to_int(long lnbr)
{
  int		nb;

  nb = 0;
  if (lnbr > INT_OVER_P || lnbr < INT_OVER_N)
    return (1);
  if (lnbr < 0)
    {
      while (lnbr++ != 0)
	--nb;
    }
  else if (lnbr > 0)
    {
      while (lnbr-- != 0)
	++nb;
    }
  return (nb);
}

int		my_power(int nb, int power)
{
  long		a;
  int		result;

  if (nb == 0)
    return (0);
  else if (power <= 0)
    return (1);
  a = ((my_power(nb, --power)) * nb);
  if (a > INT_OVER_P || a < INT_OVER_N)
    return (1);
  result = my_long_to_int(a);
  return (result);
}
