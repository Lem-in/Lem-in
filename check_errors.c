/*
** check_error.c for check_error in /home/van-de_j/rendu/Prog_Elem/CPE_2014_lemin
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Tue Apr 14 08:59:26 2015 jessica van-den-zande
** Last update Tue Apr 14 11:11:10 2015 jessica van-den-zande
*/

int	check_main(int ac, char **av, char **env)
{
  if (env[0] == NULL)
    return (my_puterror("Bad environnement.\n"));
  if (ac == 1)
    return(my_puterror("It needs the config file.\n"));
  return (0);
}
