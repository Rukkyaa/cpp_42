# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 23:13:43 by rukkyaa           #+#    #+#              #
#    Updated: 2023/02/18 16:23:15 by rukkyaa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= $(addsuffix .cpp, main Contact PhoneBook)
OBJS	= $(SRCS:%.cpp=.build/%.o)

NAME	= my_phone
CC		= c++
RM		= rm -rf
CFLAGS	= -std=c++98 -Wall -Wextra -Werror
# HEADERS = -I includes/

flag:=1
.build/%.o : %.cpp
		@if [ $(flag) = "1" ]; then\
			clear;\
			printf "\033[1;35m========================================\n";\
			printf "|         CPP M00/ex01 LOADING         |\n";\
			printf "========================================\n";\
			printf "|                                      |\n";\
			printf "|                                      |\n\033[A\033[A";\
		fi
		@setterm -cursor off
		@mkdir -p .build
		@$(CC) $(CFLAGS) -c $< -o $@
		@printf "\033[1;32m|\033[32m                                      \033[m\r"
		@printf "\033[32mCompiling $@... \033[m\r"

$(NAME):$(OBJS)
		@printf "\033[K\033[1;32m| Cpp Module00 : compiled              |\n\033[m"
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@printf "\033[1;32m========================================\n"
		@printf "|         COMPILATION FINISHED !       |\n"
		@printf "========================================\n\033[m"
		@setterm -cursor on

all: $(NAME)

clean:
			@printf "\033[1;31m========================================\n"
			@printf "|         CPP Module00 CLEANING        |\n"
			@printf "========================================\n\033[m"
			@printf "\033[K\033[1;31m|\033[1;33m Destroying objects                   \033[1;31m|\n\033[m"
			@$(RM) .build

fclean:	clean
			@printf "\033[K\033[1;31m|\033[1;31m Destroying all                       \033[1;31m|\n\033[m"
			@$(RM) .build $(NAME)
			@printf "\033[1;31m========================================\n\033[m"

re:		fclean all

.PHONY: all clean fclean re 
