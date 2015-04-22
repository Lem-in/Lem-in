/*
** parser.c for lem in /home/andre_n/rendu/lem-in/2lem
**
** Made by nicolas ANDRE
** Login   <andre_n@epitech.net>
**
** Started on  Tue Apr  7 16:35:10 2015 nicolas ANDRE
** Last update Wed Apr 22 13:59:33 2015 nicolas ANDRE
*/

#include "lem.h"

int	check_mot(char *);

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

int	nb_mot(char *str)
{
  int	c;
  int	i;

  i = 0;
  c = 0;
  while (str[i] != '\0')
    {
      while ((str[i] >= 'a' && str[i] <= 'z')
	     && (str[i] >= 'A' && str[i] <= 'Z')
	     && (str[i] >= '0' && str[i] <= '9'))
	{
	  c++;

	}
    }
  printf("%d\n", c);
  return (c);
}

/*
int	check_error_coordonne(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	{
	  i++;
	  while (str[i])
	}
      i++;
    }
    }*/

int	command(char *str)
{
  if (strncmp(str, "##start", 7) == 0)
    return (1);
  else if (strncmp(str, "##end", 5) == 0)
    return (2);
  else if (str[0] == '#' && str[1] != '#')
    return (3);
  else
    return (4);
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
  pony = read(fd, buff, 4095);
  buff[pony] = '\0';
  printf("%s\n", buff);
  tab = my_str_to_wordtab(buff);
  while (tab[x] != NULL || tab[x] != '\0')
    {
      if (nb_fourmi(my_getnbr(line(tab, 0, y))) > 0)
	{
	  printf("il y a %d fourmi.\n ")
	}
      /*if (x == 0)
	{
	  printf("%d\n", nb_fourmi(my_getnbr(line(tab, 0, y))));
	  x++;
	  }*/
      if (x == 21)
	{
	  printf("%s\n", line(tab, x, y));
	  //	  nb_mot(line(tab, x, y));
	}
      if (command(line(tab, x, y)) == 1)
	{
	  puts("command de depart.\n");
	  x++;
	}
      if (command(line(tab, x, y)) == 2)
	  puts("command de fin.\n");
      if (command(line(tab, x, y)) == 3)
	puts("commentaire.\n");
      if (command(line(tab, x, y)) == 4)
      puts("nom de la salle ainsi que s'est coordonnée.\n");
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
