##
## Makefile for Makefile in /home/van-de_j/rendu/Prog_Elem/CPE_2014_lemin
## 
## Made by jessica van-den-zande
## Login   <van-de_j@epitech.net>
## 
## Started on  Tue Apr 14 08:54:24 2015 jessica van-den-zande
## Last update Tue Apr 14 14:35:59 2015 jessica van-den-zande
##

CC	= gcc

RM	= rm -f

LDFLAGS	+= -W -Wall -Wextra -Wextra

NAME	= lem_in

SRC	= main.c		\
	  check_errors.c

OBJS	= $(SRC:.c=.o)

$(NAME):  $(OBJS)
	  ar -r $(NAME) $(OBJS)
	  ranlib $(NAME)
	  $(CC) $(OBJS) -o $(NAME)

all:	  $(NAME)

clean:
	  $(RM) $(OBJS)

fclean:	  clean
	  $(RM) $(NAME)

re:	  fclean all

.PHONY:	  all clean fclean re
