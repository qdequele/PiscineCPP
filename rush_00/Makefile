# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 14:54:23 by qdequele          #+#    #+#              #
#    Updated: 2018/01/14 19:50:02 by kwiessle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	ft_retro

SRC			=	main.cpp \
				Bullet.cpp \
				Game.cpp \
				Object.cpp \
				Spaceship.cpp \
				Weapon.cpp \
				Action.cpp \
				Enemy.cpp \

OBJ			=	$(SRC:.cpp=.o)
CFLAGS		=	-Wall -Wextra -Werror
LIBS		=	-lncurses -lpanel

%.o: %.c
	@echo -n .
	@$clang++ $(CFLAGS) -c $< -o $@

all: $(NAME) $(INC)

$(NAME): $(OBJ)
	@clang++ $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)
	@echo $(NAME) " - compiled"

clean:
	@/bin/rm -rf $(OBJ)
	@echo $(NAME) " - Clean all .o files"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo $(NAME) " - Clean executable"

re: fclean all
