/*
** parser.c for lem in in /home/andre_n/rendu/lem-in
**
** Made by nicolas ANDRE
** Login   <andre_n@epitech.net>
**
** Started on  Tue Apr  7 11:13:40 2015 nicolas ANDRE
** Last update Tue Apr 14 14:55:13 2015 Maxime BOUCHER
*/

int	len(char *str)
{
  int	i;

  i = 0;
  while (str[i++]);
  return (i - 1);
}

int	puterror(char *str)
{
  write (2, str, len(str));
  return (-1);
}

int	**parser(char **av)
{
  int	x;
  int	y;
  int	fd;
  char	buff;

  i = 0;
  y = 0;
  if ((fd = open(av, O_RDONLY)) == -1)
    return (puterror("error d'ouverture de fichier.\n"));
  printf("%s\n", buff);
  while (read(fd, &buff, 1) > 0)
    {
      if (buff != '\n')
	{
	  if (x >= )
	    {
	      x = 0;
	      ++y;
	    }
	}
    }
  return (0);
}

int	main(int ac, char **av)
{
  if (ac <= 1)
    return (puterror("error d'argument.\n"));
  parser(av[1]);
}
