# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/28 13:54:07 by ecollot           #+#    #+#              #
#    Updated: 2014/03/13 15:03:23 by ecollot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = puissance4

CC = cc

SRC = src/main.c			\
	  src/create_grid.c		\
	  src/fill_grid.c		\
	  src/init.c			\
	  src/print.c			\
	  src/player.c			\
	  src/winner.c			\
	  src/point.c			\
	  src/ia.c				\
	  src/puissance4.c		\
	  src/algo.c			\
	  src/trash.c

OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

OBJDIR = .obj

LIBDIR = libft

CFLAGS = -Wextra -Wall -Werror  -I./includes -I./libft/includes

.SILENT :

all: $(NAME)

$(addprefix $(OBJDIR)/, %.o)	: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
	echo "\033[1;35m[CREATE OBJECT] $@\033[0m"	

$(NAME): $(OBJDIR) $(OBJ)
	make -C $(LIBDIR)/
	$(CC) $(CFLAGS) -o $(NAME) -L$(LIBDIR)/ -lft $(OBJ)
	echo "\033[1;34m[COMPILATION COMPLETE]\033[1;35m$(NAME) \033[1;33m$(CC)\033[0m"

$(OBJDIR):
	mkdir $(OBJDIR)
	mkdir $(OBJDIR)/src

clean:
	rm -rf $(OBJ) $(OBJDIR)
	make -C $(LIBDIR)/ clean

fclean: clean
	rm -rf $(NAME) $(OBJ)
	make -C $(LIBDIR)/ fclean

re: fclean all
