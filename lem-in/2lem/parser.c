/*
** parser.c for lem in /home/andre_n/rendu/lem-in/2lem
**
** Made by nicolas ANDRE
** Login   <andre_n@epitech.net>
**
** Started on  Tue Apr  7 16:35:10 2015 nicolas ANDRE
** Last update Tue Apr 14 17:27:56 2015 nicolas ANDRE
*/

#include "lem.h"

int	len(char *str)
{
  int	i;

  i = 0;
  while (str[i++]);
  return (i - 1);
}

int	puterror(char *str)
{
  write(2, str, len(str));
  return (-1);
}

void	my_putstr(char *str)
{
  write(1, str, len(str));
}
/*
void	my_putchar(char c)
{
  write(1, &c, 1);
}
*/
char	*line(char **buff, int x, int y)
{
  char	*str;

  str = malloc(sizeof(buff[x][y]));
  while (buff[x][y] != '\0')
    {
      str[y] = buff[x][y];
      y++;
    }
  str[y] = '\0';
  return (str);
}


int	my_getnbr(char *str)
{
  int	res;

  res = 0;
  if (*str == '-')
    return (-my_getnbr(str + 1));
  if (*str == '+')
    return (my_getnbr(str + 1));
  while (*str && (str[0] >= '0' && str[0] <= '9'))
    {
      res = res * 10;
      res = res + (*str - '0');
      str = str + 1;
    }
  printf("%d\n", res);
  return (res);
}

int	nb_fourmi(int nb)
{
  int	nb_fourmi;

  if (nb <= 0)
    {
      puts("pas de fourmi ou trop fourmi.\n");
      exit (0);
    }
  else if (nb > 0)
    {
      nb_fourmi = nb;
      // printf("%d\n", nb_fourmi);
      return ((nb_fourmi));
    }
}

char	**file(char *str)
{
  char	buff[4096];
  int	fd;
  int	c;
  int	x;
  int	y;
  int	pony;
  char	**tab;

  c = 0;
  x = 0;
  y = 0;
  if ((fd = open(str, O_RDONLY)) == -1)
    puterror("fuck.\n");
  pony = read(fd, buff, 4096);
  buff[pony] = '\0';
  printf("%s\n", buff);
  tab = my_str_to_wordtab(buff);
  while (tab[x] != NULL || tab[x] != '\0')
    {
      if (x == 0)
	{
	  printf("%d\n", nb_fourmi(my_getnbr(line(tab, 0, y))));
	  //y++;
	}
      x++;
    }
}

int	main(int ac, char **av)
{
  if (ac != 2)
    return (puterror("pas d'argument.\n"));
  file(av[1]);
  return (0);
}
