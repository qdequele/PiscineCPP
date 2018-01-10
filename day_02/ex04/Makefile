# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 14:54:23 by qdequele          #+#    #+#              #
#    Updated: 2018/01/10 14:40:00 by qdequele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	eval_exp

SRC			=	main.cpp \
				Fixed.cpp

OBJ			=	$(SRC:.cpp=.o)

CFLAGS		=	-Wall -Wextra -Werror

%.o: %.c
	@echo -n .
	@$clang++ $(CFLAGS) -c $< -o $@

all: $(NAME) $(INC)

$(NAME): $(OBJ)
	@clang++ $(CFLAGS) $(OBJ) -o $(NAME)
	@echo $(NAME) " - compiled"

clean:
	@/bin/rm -rf $(OBJ)
	@echo $(NAME) " - Clean all .o files"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo $(NAME) " - Clean executable"

re: fclean all
