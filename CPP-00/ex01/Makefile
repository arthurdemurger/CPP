# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 14:11:00 by ademurge          #+#    #+#              #
#    Updated: 2022/12/17 17:08:01 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	Contact.cpp \
				PhoneBook.cpp \
				main.cpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	g++

RM			=	rm -f

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME 		=	phonebook

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY: all clean fclean re