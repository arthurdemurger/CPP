# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 11:46:45 by ademurge          #+#    #+#              #
#    Updated: 2023/03/15 17:54:38 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC			=	main.cpp \
				AMateria.cpp \
				Character.cpp \
				ICharacter.cpp \
				Cure.cpp \
				Ice.cpp \
				MateriaSource.cpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	c++

RM			=	rm -f

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME 		=	IceCure

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY: all clean fclean re