# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 14:08:36 by ademurge          #+#    #+#              #
#    Updated: 2023/03/16 10:48:22 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	HarlFilter

CC			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

OBJDIR		=	.obj

SRC			=	main.cpp \
				Harl.cpp

OBJ			=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o:	%.cpp
				@mkdir -p $(dir $@)
				@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJDIR) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY: all clean fclean re