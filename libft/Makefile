# p
# **************************************************************************** #
                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/28 13:54:07 by ecollot           #+#    #+#              #
#    Updated: 2014/01/03 11:32:55 by ecollot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

SRC = src/df_strlen.c				\
	  src/df_strcpy.c				\
	  src/df_isalpha.c				\
	  src/df_isdigit.c				\
	  src/df_isalnum.c				\
	  src/df_isascii.c				\
	  src/df_isprint.c				\
	  src/df_toupper.c				\
	  src/df_tolower.c				\
	  src/df_strdup.c				\
	  src/df_strncpy.c				\
	  src/df_strcat.c				\
	  src/df_strncat.c				\
	  src/df_strchr.c				\
	  src/df_strstr.c				\
	  src/df_strrchr.c				\
	  src/df_atoi.c					\
	  src/df_strcmp.c				\
	  src/df_strncmp.c				\
	  src/df_bzero.c				\
	  src/df_strdel.c				\
	  src/df_strclr.c				\
	  src/df_strjoin.c				\
	  src/df_strsplit.c				\
	  src/df_itoa.c					\
	  src/df_putchar.c				\
	  src/df_putchar_fd.c			\
	  src/df_putstr.c				\
	  src/df_putstr_fd.c			\
	  src/df_putendl.c				\
	  src/df_putendl_fd.c			\
	  src/df_putnbr.c				\
	  src/df_putnbr_fd.c			\
	  src/get_next_line.c			\
	  src/df_printf.c				\
	  src/df_checkflag.c			\
	  src/df_checktype.c			\
	  src/df_putunbr.c				\
	  src/df_putpf_o.c				\
	  src/df_putpf_x.c				\
	  src/df_putpf_d.c				\
	  src/df_strlen_at.c			\
	  src/df_strdup_at.c


OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

OBJDIR = .obj

SRCDIR = src

CFLAGS = -Wextra -Wall -Werror -I./includes

.SILENT :

all: $(NAME)

$(addprefix $(OBJDIR)/, %.o)	: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
	echo "\033[1;35m[CREATE LIB-OBJECT] $@\033[0m"

$(NAME): $(OBJDIR) $(OBJ)
	ar rc $(NAME) $(OBJ)
	echo "\033[1;32mLib has been created with success\n\033[0m"

$(OBJDIR):
	mkdir $(OBJDIR)
	mkdir $(OBJDIR)/src

clean:
	rm -rf $(OBJ) $(OBJDIR)

fclean: clean
	rm -rf $(NAME) $(OBJ)

re: fclean all
