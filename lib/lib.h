/*
** my.h for my.h in /home/van-de_j
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Dec  2 12:11:58 2014 jessica van-den-zande
** Last update Tue Apr 14 11:13:17 2015 jessica van-den-zande
*/

#ifndef MY_H_
# define MY_H_

# include "../lem.h"

/*
** Prototypes fonctions lib
*/

void	my_putchar(char);
int	my_putchar_error(char);
int	my_put_nbr(int);
int	my_putstr(char *);
int	my_puterror(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
int	my_memset(char *, int, int);
char	**my_str_to_wordtab(char *str);

#endif /* !MY_H_ */
