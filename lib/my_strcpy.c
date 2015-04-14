/*
** my_strcpy.c for my_strcpy.c in /home/van-de_j/Ressource/Lib_en_c
**
** Made by jessica van-den-zande
** Login   <van-de_j@epitech.net>
**
** Started on  Mon Oct 20 10:54:54 2014 jessica van-den-zande
** Last update Tue Apr 14 14:31:06 2015 jessica van-den-zande
*/

#include "../lem.h"

char	*my_strcpy(char *dest, char *src)
{
  while (*src != '\0')
    {
      *dest = *src;
      dest = dest + 1;
      src = src + 1;
    }
  return dest;
}
