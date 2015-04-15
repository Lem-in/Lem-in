/*
** ex3.c for epireboot in /home/andre_n/rendu/epireboot/day_02
**
** Made by nicolas ANDRE
** Login   <andre_n@epitech.net>
**
** Started on  Tue Mar 31 13:54:47 2015 nicolas ANDRE
** Last update Tue Apr 14 15:43:32 2015 Maxime BOUCHER
*/

#include <stdlib.h>
#include <stdio.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}


int	len(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}


char	*my_strdup(char *src)
{
  int	i;
  char	*dest;

  i = 0;
  if ((dest = malloc(len(src) + 1)) == NULL)
    return (NULL);
  while (src[i])
    dest[i] = src[i++];
  dest[i] = '\0';
  return (dest);
}

int	my_count_word(char *s)
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (s[i])
    {
      if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z')
	  || (s[i] >= 'a' && s[i] <= 'z') || s[i] == '#')
	{
	  c++;
	  while (((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z')
		  || (s[i] >= 'a' && s[i] <= 'z') || s[i] == '#') && s[i] != '\0')
	    i++;
	  if (s[i] == '\0')
	    return (c);
	}
      else
	printf("error ");
      i++;
    }

  return (c);
}

int	my_count_char(char *s, int *i)
{
  int	c;

  c = 0;
  while (s[*i] && ((s[*i] >= 'a' && s[*i] <='z'))
	 || s[*i] && ((s[*i] >= 'A' && s[*i] <='Z')) || s[*i] == '#')
    {
      c++;
      *i = *i + 1;
    }
  return (c);
}

char	**my_str_to_word_tab(char *str)
{
  int	i;
  int	n;
  int	word;
  char	**tab;

  i = 0;
  n = 0;
  word = my_count_word(my_strdup(str));
  tab = (char **) malloc(sizeof(char *) * word);
  while (str[i] && word > 0)
    {
      if ((str[i] >= 'a' && str[i] <= 'z' || (str[i] >= 'A' && str[i] <= 'Z')
	   || (str[i] > '!' && str[i] < '9')))
	{
	  tab[n] = my_strdup(str + i);
	  tab[n][my_count_char(str, &i)] = '\0';
	  n++;
	  word--;
	}
      i++;
    }

  tab[my_count_word(my_strdup(str))] = NULL;
  return (tab);
}


void	test_str_to_wordtab(char **str)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (str[x])
    {
      while (str[x][y])
	{
	  my_putchar(str[x][y]);
	  y++;
	}
      my_putchar('\n');
      x++;
      y = 0;
    }
}
/*
int	main(int ac, char **av)
{
  test_str_to_wordtab(my_str_to_word_tab(av[1]));
  }*/
