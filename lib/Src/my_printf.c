/*
** my_printf.c for my_printf in /home/perrie_s/Lib/Src
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:16:17 2014 Simon PERRIERE
** Last update Wed Dec 17 17:16:17 2014 Simon PERRIERE
*/

#include "../Inc/my_lib.h"

int		my_check_put(int fd, char c, va_list ap, char *flag)
{
  int		(*my_ptf[10])(int fd, va_list ap);
  int		i;

  i = 0;
  my_ptf[0] = &my_ptf_pchar;
  my_ptf[1] = &my_ptf_pnbr;
  my_ptf[2] = &my_ptf_punbr;
  my_ptf[3] = &my_ptf_phex;
  my_ptf[4] = &my_ptf_pchex;
  my_ptf[5] = &my_ptf_pubin;
  my_ptf[6] = &my_ptf_puoct;
  my_ptf[7] = &my_ptf_pustr;
  my_ptf[8] = &my_ptf_pstr;
  my_ptf[9] = &my_ptf_pline;
  if (fd < 0 || flag == NULL || my_strlen(flag) != 10)
    return (-1);
  while (flag[i] != 0 && flag[i] != c)
    ++i;
  if ((flag[i] == 0 && my_putchar(fd, '%') < 0 && my_putchar(fd, c) < 0)
      || (i < 10 && my_ptf[i](fd, ap) < 0))
    return (-1);
  return (0);
}

int		my_printf(char *str, ...)
{
  int		i;
  va_list	ap;

  i = 0;
  va_start(ap, str);
  if (str == NULL || my_strlen(str) < 0)
    {
      return (-1);
    }
  while (str[i] != 0)
    {
      if ((str[i] == '%' && my_check_put(1, str[++i], ap, FLAG) < 0)
	  || (str[i] != '%' && str[i - 1] != '%'
	      && my_putchar(1, str[i]) < 0))
	return (-1);
      ++i;
    }
  va_end(ap);
  return (0);
}

int		my_fprintf(int fd, char *str, ...)
{
  int		i;
  va_list	ap;

  i = 0;
  va_start(ap, str);
  if (fd < 0 || str == NULL || my_strlen(str) < 0)
    return (-1);
  while (str[i] != 0)
    {
      if ((str[i] == '%' && my_check_put(fd, str[++i], ap, FLAG) < 0)
	  || (str[i] != '%' && str[i - 1] != '%'
	      && my_putchar(fd, str[i]) < 0))
	return (-1);
      ++i;
    }
  va_end(ap);
  return (0);
}
