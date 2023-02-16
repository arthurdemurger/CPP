# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 14:11:00 by ademurge          #+#    #+#              #
#    Updated: 2023/02/16 13:52:59 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	megaphone.cpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	c++

RM			=	rm -f

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME 		=	megaphone

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY: all clean fclean re