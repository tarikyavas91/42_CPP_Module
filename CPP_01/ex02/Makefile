# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/27 19:48:37 by tyavas            #+#    #+#              #
#    Updated: 2023/05/27 19:48:38 by tyavas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Brain

SRC_DIR		=	.
OBJ_DIR		=	obj/

INCS_DIR	=	.
MAIN_INC	= -I $(INCS_DIR)
INCS		=	$(shell find $(INCS_DIR) -type f -name "*.hpp")

SRC			=	main.cpp \
				
OBJ			=	$(SRC:.cpp=.o)

CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

%.o: %.cpp $(INCS)
		$(CC) ${CFLAGS}  $(MAIN_INC) -o $@ -c $<

$(NAME)		:	$(OBJ) $(INCS)
		$(CC) $(CFLAGS) $(OBJ) $(MAIN_INC) -o $(NAME)
					
all			:	$(NAME)

clean		:
		@rm -rf $(OBJ)

fclean		:	clean
		@rm -rf $(NAME)

re			:	fclean	all

.PHONY		:	all clean fclean re