# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 12:38:05 by ademurge          #+#    #+#              #
#    Updated: 2022/12/24 15:04:02 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	main.cpp \
				Fixed.cpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	g++

RM			=	rm -f

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME 		=	fixed

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY: all clean fclean re