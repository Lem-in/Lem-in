##
## Makefile for Makefile in /home/van-de_j/rendu/Prog_Elem/CPE_2014_lemin
## 
## Made by jessica van-den-zande
## Login   <van-de_j@epitech.net>
## 
## Started on  Tue Apr 14 18:01:13 2015 jessica van-den-zande
## Last update Wed Apr 15 10:38:40 2015 Simon Perriere
##

CC	=	gcc

RM	=	rm -f

DIR	=	lib/Src

LDFLAGS	+=	-W
LDFLAGS	+=	-Wall
LDFLAGS	+=	-Wextra
LDFLAGS	+=	-Werror

NAME	=	lem_in

SRC	=	main.c			\
		check_errors.c		\
		$(DIR)/my_putstr.c	\
		$(DIR)/my_putchar.c

OBJS	=	$(SRC:.c=.o)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME)
		@echo -e "\033[31;40mCompilation complete \033[37;40m"
		@echo -e "\033[31;40m          __.-n-."
		@echo -e "          \|'---'|-,"
		@echo -e "           |     | ))"
		@echo -e "           |     |-'"
		@echo -e "           '.___.'"
		@echo -e ""
		@echo -e "\033[35;40m  (\033[34;40m        (\033[36;40m       (\033[32;40m       ("
		@echo -e "\033[35;40m  ))\033[34;40m       ))\033[36;40m      )) \033[32;40m     ))"
		@echo -e "\033[35;40m |''|-.\033[34;40m   |''|-.\033[36;40m  |''|-.\033[32;40m  |''|-."
		@echo -e "\033[35;40m |__|-'\033[34;40m   |__|-'\033[36;40m  |__|-'\033[32;40m  |__|-'"
		@echo -e "\033[35;40m Jess\033[34;40m     Ayio\033[36;40m    Jesus\033[32;40m   Nico\033[37;40m"

all:		$(NAME)
		@echo -e "\033[33;40mExecutable create \033[37;40m"

clean:
		$(RM) $(OBJS)
		@echo -e "\033[32;40m.o delete \033[37;40m"

fclean:		clean
		$(RM) $(NAME)
		@echo -e "\033[34;40mExecutable delete \033[37;40m"

re:		fclean all

.PHONY:		all clean fclean re
