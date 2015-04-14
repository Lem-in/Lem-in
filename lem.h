/*
** lem.h for lem.h in /home/van-de_j/rendu/Prog_Elem/CPE_2014_lemin
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Apr 14 14:49:53 2015 jessica van-den-zande
** Last update Tue Apr 14 17:29:23 2015 jessica van-den-zande
*/

#ifndef LEM_H_
# define LEM_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "lib/Inc/my_lib.h"

/*
** Prototype lemin functions
*/

int	main(int, char **, char **);
int	check_arg(int, char **, char **);

/*
** Librairies functions
*/

void	my_putchar(char);
int	my_putstr(char *);
int	my_putchar_error(char *);
int	my_puterror(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
int	my_memset(char *);
char	**my_str_to_wordtab(char *);

#endif /* ! LEM_H_ */
