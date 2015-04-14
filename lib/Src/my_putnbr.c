/*
** my_putnbr.c for my_putnbr in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:20:07 2014 Simon PERRIERE
** Last update Wed Dec 17 17:20:08 2014 Simon PERRIERE
*/

# include "../Inc/my_lib.h"

int		my_putnbr(int fd, int nbr)
{
  int		cmp;

  cmp = 0;
  if (fd < 0)
    return (-1);
  if (nbr < 0)
    {
      if (my_putchar(fd, '-') < 0)
	return (-1);
      if (nbr == INT_OVER_N)
	{
	  nbr = (nbr + 1) * (-1);
	  cmp = 1;
	}
      else
	nbr = nbr * (-1);
    }
  if (nbr >= 10 && my_putnbr(fd, (nbr / 10)) < 0)
    return (-1);
  nbr = (nbr % 10) + cmp;
  if (my_putchar(fd, (nbr + 48)) < 0)
    return (-1);
  return (0);
}

int		my_put_unbr(int fd, unsigned int nbr)
{
  if (fd < 0)
    return (-1);
  if (nbr >= 10 && my_put_unbr(fd, (nbr / 10)) < 0)
    return (-1);
  nbr = (nbr % 10);
  if (my_putchar(fd, (nbr + 48)) < 0)
    return (-1);
  return (0);
}

int		my_putnbr_base(int fd, int nbr, char *base)
{
  int		nb_base;
  int		next;
  long		nb;

  nb = nbr;
  if (base == NULL || (nb_base = my_check_base(base)) < 2)
    return (-1);
  if (nb < 0)
    {
      nb = nb * (-1);
      if (my_putchar(fd, '-') < 0)
	return (-1);
    }
  if (nb > 0)
    {
      next = (nb - (nb % nb_base)) / nb_base;
      if (next != 0 && my_putnbr_base(fd, next, base) < 0)
	return (-1);
      if ((next = nb % nb_base) < nb_base && my_putchar(fd, base[next]) < 0)
	return (-1);
    }
  if (nb == 0 && my_putchar(fd, base[nb]) < 0)
    return (-1);
  return (1);
}

int		my_put_unbrbase(int fd, unsigned int nb, char *base)
{
  int		nb_base;
  int		next;

  if (base == NULL || (nb_base = my_check_base(base)) < 2)
    return (-1);
  if (nb > 0)
    {
      next = (nb - (nb % nb_base)) / nb_base;
      if (next != 0 && my_put_unbrbase(fd, next, base) < 0)
	return (-1);
      if ((next = nb % nb_base) < nb_base && my_putchar(fd, base[next]) < 0)
	return (-1);
    }
  if (nb == 0 && my_putchar(fd, base[nb]) < 0)
    return (-1);
  return (1);
}

int		my_check_base(char *base)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  if (base == NULL || my_strlen(base) < 0)
    return (-1);
  while (base[i] != 0)
    {
      while (base[j] != 0)
	{
	  if (i != j && base[i] == base[j])
	    return (-1);
	  ++j;
	}
      j = 0;
      ++i;
    }
  if (i < 2)
    return (-1);
  return (i);
}
