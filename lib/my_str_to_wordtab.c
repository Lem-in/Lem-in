/*
** my_str_to_wordtab.c for str_to_wordtab in /home/van-de_j/rendu/EpiReboot/Semaine_1/Jour2
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Mar 31 15:43:25 2015 jessica van-den-zande
** Last update Tue Apr 14 14:30:49 2015 jessica van-den-zande
*/

#include <../lem.h>

int	my_strlen(char *str)
{
  int	count;

  count = 0;
  while (str[count])
    count++;
  return (count);
}

int	word_counter(char *str, int lenght, int count_word)
{
  lenght = 0;
  count_word = 1;
  while (str[lenght])
    {
      if ((str[lenght] >= 'A' && str[lenght] <= 'Z')
	  || (str[lenght] >= 'a' && str[lenght] <= 'z')
	  || (str[lenght] >= '0' && str[lenght] <= '9'))
	lenght++;
      else
	{
	  lenght++;
	  count_word++;
	}
    }
  return (count_word);
}

char	**fill_tab(char *str, int pos, char **tab)
{
  int	x;
  int	y;

  x = 0;
  while (str[pos] != '\0')
    {
      if ((tab[x] = malloc(sizeof(tab[x]) * (my_strlen(str) + 1))) == NULL)
	return (NULL);
      y = 0;
      while (((str[pos] >= 'A' && str[pos] <= 'Z')
	      || (str[pos] >= 'a' && str[pos] <= 'z')
	      || (str[pos] >= '0' && str[pos] <= '9')) && str[pos])
	tab[x][y++] = str[pos++];
      while (((str[pos] < 'A' || str[pos] > 'Z')
	      && (str[pos] < 'a' || str[pos] > 'z')
	      && (str[pos] < '0' || str[pos] > '9')) && str[pos])
	{
	  pos++;
	}
      tab[x][y] = '\0';
      x++;
    }
  tab[x] = NULL;
  return (tab);
}
char	**my_str_to_wordtab(char *str)
{
  int	count_word;
  int	lenght;
  char	**tab;
  int	pos;

  count_word = word_counter(str, lenght, count_word);
  if ((tab = malloc(sizeof(char *) * (count_word + 1))) == NULL)
    return (NULL);
  lenght = 0;
  pos = 0;
  fill_tab(str, pos, tab);
  return (tab);
}
