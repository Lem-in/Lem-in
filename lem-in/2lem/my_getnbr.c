/*
** my_getnbr.c for my_getnbr in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:13:38 2014 Simon PERRIERE
** Last update Tue Apr 14 17:42:36 2015 nicolas ANDRE
*/

#include "../../lib/Inc/my_lib.h"

int		my_getnbr(char *nbr)
{
  int		i;
  int		cmp;
  int		nb;

  i = 0;
  cmp = 0;
  nb = 0;
  if (nbr == NULL || my_strlen(nbr) < 0)
    return (0);
  while (nbr[i] != 0 && (nbr[i] == '-' || nbr[i] == '+'))
    {
      if (nbr[i++] == '-')
	cmp = (cmp + 1) % 2;
    }
  while (nbr[i] != 0 && (nbr[i] >= DEC_MIN && nbr[i] <= DEC_MAX))
    {
      if (cmp == 0 && (INT_OVER_P  - (nb * 10) - (nbr[i] - 48)) >= 0)
	nb = nb * 10 + ((nbr[i] - 48));
      else if (cmp == 1 && (INT_OVER_N - (nb * 10) + (nbr[i] - 48)) <= 0)
	nb = nb * 10 - ((nbr[i] - 48));
      else
	return (0);
      ++i;
    }
  return (nb);
}

int		my_getnbr_base(char *nbr, char *base)
{
  int		i;
  int		cmp;
  int		nb;
  int		num;

  i = 0;
  cmp = 0;
  nb = 0;
  if (nbr == NULL || base == NULL || my_strlen(nbr) < 0
      || my_check_base(base) < 2 || my_check_conv(nbr, base) < 0)
    return (0);
  while (nbr[i] != 0 && (nbr[i] == '-' || nbr[i] == '+'))
    if (nbr[i++] == '-')
      cmp = (cmp + 1) % 2;
  while (nbr[i] != 0 && (num = my_find_rank(nbr[i], base)) != -1)
    {
      if (cmp == 0 && (INT_OVER_P - (nb * 10) - num) >= 0)
	nb = nb * 10 + num;
      else if (cmp == 1 && (INT_OVER_N - (nb * 10) + num) <= 0)
	nb = nb * 10 - num;
      else
	return (0);
      ++i;
    }
  return (nb);
}

int		my_find_rank(char c, char *base)
{
  int		i;

  i = 0;
  if (c <= CHAR_MIN || c >= CHAR_MAX_EXT
      || base == NULL || my_check_base(base) < 2)
    return (-1);
  while (base[i] != 0 && base[i] != c)
    ++i;
  if (base[i] == 0)
    return (-1);
  return (i);
}

int		my_check_conv(char *str, char *base)
{
  int		i;
  int		j;

  i = 0;
  if (str == NULL || base == NULL
      || my_strlen(str) < 0 || my_check_base(base) < 2)
    return (-1);
  while (str[i] != 0)
    {
      while (base[j] != 0 && base[j] != str[i])
	++j;
      if (base[j] == 0)
	return (-1);
      j = 0;
      ++i;
    }
  return (1);
}
