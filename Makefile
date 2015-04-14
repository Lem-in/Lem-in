##
## Makefile for Makefile in /home/perrie_s/rendu/CPE_2014_lemin
## 
## Made by Simon Perriere
## Login   <perrie_s@epitech.net>
## 
## Started on  Tue Apr 14 17:18:02 2015 Simon Perriere
## Last update Tue Apr 14 17:42:04 2015 Simon Perriere
##

CC	=	gcc

RM	=	rm -f

LDFLAGS	+=	-W
LDFLAGS	+=	-Wall
LDFLAGS	+=	-Wextra
LDFLAGS	+=	-Werror

NAME	=	lem_in

SRC	=	main.c		\
		check_errors.c	\

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
		@echo -e "\033[35;40m  (\033[34;40m        (\033[30;40m       (\033[32;40m       ("
		@echo -e "\033[35;40m  ))\033[34;40m       ))\033[30;40m      )) \033[32;40m     ))"
		@echo -e "\033[35;40m |''|-.\033[34;40m   |''|-.\033[30;40m  |''|-.\033[32;40m  |''|-."
		@echo -e "\033[35;40m |__|-'\033[34;40m   |__|-'\033[30;40m  |__|-'\033[32;40m  |__|-'"
		@echo -e "\033[35;40m Jess\033[34;40m     Ayio\033[30;40m    Jesus\033[32;40m   Nico"

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
