/*
** my_ptf_one.c for my_ptf_one in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:16:40 2014 Simon PERRIERE
** Last update Wed Dec 17 17:16:50 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

int		my_ptf_pchar(int fd, va_list ap)
{
  if (fd < 0 || my_putchar(fd, (char) va_arg(ap, int)) < 0)
    return (-1);
  return (0);
}

int		my_ptf_pnbr(int fd, va_list ap)
{
  if (fd < 0 || my_putnbr_base(fd, va_arg(ap, int), DECIMAL) < 0)
    return (-1);
  return (0);
}

int		my_ptf_punbr(int fd, va_list ap)
{
  if (fd < 0 || my_put_unbrbase(fd, va_arg(ap, unsigned int), DECIMAL) < 0)
    return (-1);
  return (0);
}

int		my_ptf_phex(int fd, va_list ap)
{
  if (fd < 0 || my_putnbr_base(fd, va_arg(ap, int), HEX_MIN) < 0)
    return (-1);
  return (0);
}

int		my_ptf_pchex(int fd, va_list ap)
{
  if (fd < 0 || my_putnbr_base(fd, va_arg(ap, int), HEX_CAP) < 0)
    return (-1);
  return (0);
}
