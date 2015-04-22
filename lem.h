/*
** lem.h for lem.h in /home/van-de_j/rendu/Prog_Elem/CPE_2014_lemin
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Apr 14 14:49:53 2015 jessica van-den-zande
** Last update Wed Apr 15 11:35:48 2015 jessica van-den-zande
*/

#ifndef LEM_H_
# define LEM_H_

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "lib/Inc/my_lib.h"

/*
** Defines declaration
*/

# define BUFF_SIZE 4096

/*
** Prototype lemin functions
*/

int	main(int, char **, char **);
int	check_arg(int, char **, char **);
int	open_read_file(char **);

#endif /* ! LEM_H_ */
