/*
** open.c for lem in /home/andre_n/rendu/lem-in/lemin
**
** Made by nicolas ANDRE
** Login   <andre_n@epitech.net>
**
** Started on  Tue Apr  7 15:51:48 2015 nicolas ANDRE
** Last update Tue Apr  7 16:31:35 2015 nicolas ANDRE
*/

#include "lem.h"

char	**file()
{
  t_lem	s;

  s->line = 0;
  s->buff = malloc(100);
  s->buff = malloc((s->nb + 1) * sizeof(char *));
  if (s->file == NULL || s->buff == NULL)
    return (puterror("fuck malloc.\n"));
  while(s->buff != NULL)
    {
      s->i = 0;
      s->buff = fgets(s->buff, 100, STDIN);
      if (s->buff != NULL)
	{
	  s->file[s->line] = strdup(s->buff);
	  s->i = strlen(s->file[s->line]);
	  if (s->file[s->line][s->i -1] == '\n')
	    s->file[s->line][s->i - 1] = 0;
	  s->line++;
	  s->file = realloc(s->file, ((s->line + 1) * sizeof(char *)));
	  if (s->file == NULL)
	    return (puterror("rien dans le fichier".\n));
	}
    }
  return (s->file);
}

int	instruct_gere(char **str)
{
  if (str[0] == '#' && str[1] == '#')
    return (1);
  return (0);
}

int	intruct(char **file)
{
  int	line;

  line = 0;
  while (file[line] != NULL)
    {
      if (instruct_gere(file[line]) == 1)
	{
	  if ((strcpr(file[line]), "##start") == 1)
	    {

	    }
	}
    }
}
