##
## Makefile for parser in /home/andre_n/rendu/CPE_2014_lemin/lem-in/2lem
## 
## Made by nicolas ANDRE
## Login   <andre_n@epitech.net>
## 
## Started on  Tue Apr 21 18:22:38 2015 nicolas ANDRE
## Last update Wed Apr 22 09:53:46 2015 nicolas ANDRE
##

CC	=	gcc

RM	=	rm -f

SRCS	=	parser.c \
		my_getnbr.c \
		my_putchar.c \
		my_putnbr.c \
		my_str_to_wordtab.c \
		lib.c \
		nb_fourmi.c \
		ex3_and_4.c \

#CFLAGS	+=	-W
#CFLAGS	+=	-Wall
#CFLAGS	+=	-Wextra
#CFLAGS	+=	-Werror

OBJS	=	$(SRCS:.c=.o)

NAME	=	pars

all:	$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: re all clean fclean
