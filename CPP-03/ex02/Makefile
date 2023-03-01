# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 12:38:05 by ademurge          #+#    #+#              #
#    Updated: 2023/03/01 13:03:04 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	c++

RM			=	rm -f

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME 		=	FragTrap

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY: all clean fclean re