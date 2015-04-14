/*
** my_ptf_tow.c for my_ptf_two in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:17:12 2014 Simon PERRIERE
** Last update Wed Dec 17 17:17:14 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

int		my_ptf_pubin(int fd, va_list ap)
{
  if (fd < 0 || my_put_unbrbase(fd, va_arg(ap, unsigned int), BINARY) < 0)
    return (-1);
  return (0);
}

int		my_ptf_puoct(int fd, va_list ap)
{
  if (fd < 0 || my_put_unbrbase(fd, va_arg(ap, unsigned int), OCTAL) < 0)
    return (-1);
  return (0);
}

int		my_ptf_pustr(int fd, va_list ap)
{
  if (fd < 0 || my_put_ustr(fd, va_arg(ap, char *)) < 0)
    return (-1);
  return (0);
}

int		my_ptf_pstr(int fd, va_list ap)
{
  if (fd < 0 || my_putstr(fd, va_arg(ap, char *)) < 0)
    return (-1);
  return (0);
}

int		my_ptf_pline(int fd, va_list ap)
{
  if (fd < 0 || my_put_line(fd, va_arg(ap, char *)) < 0)
    return (-1);
  return (0);
}
