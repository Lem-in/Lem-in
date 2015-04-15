/*
** lem.h for lem in /home/andre_n/rendu/lem-in/2lem
**
** Made by nicolas ANDRE
** Login   <andre_n@epitech.net>
**
** Started on  Wed Apr  8 15:18:07 2015 nicolas ANDRE
** Last update Tue Apr 14 16:59:51 2015 nicolas ANDRE
*/

#ifndef LEM_H_
# define LEM_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/*
** PROTOTYPE
*/

int	len(char *);
int	puterror(char *);
char	*line(char **, int, int);
int	my_getnbr(char *);
int	nb_fourmi(int);
char	**file(char *);
void	my_putstr(char *);
char	**my_str_to_wordtab(char *);
char	**my_str_to_word_tab(char *);

#endif /* !LEM_H_ */
