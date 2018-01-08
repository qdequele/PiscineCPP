# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 09:32:26 by qdequele          #+#    #+#              #
#    Updated: 2018/01/08 09:35:55 by qdequele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	megaphone

SRC			=	megaphone.cpp

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