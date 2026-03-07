# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 12:08:42 by jsurian42         #+#    #+#              #
#    Updated: 2026/03/07 16:55:49 by jsurian42        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := RepetitiveWork

SOURCES := \
		   main.cpp\
		   ClapTrap.cpp\
		   ScavTrap.cpp\
		   FragTrap.cpp

#################################
.DEFAULT_GOAL := all

CC			:= c++
CFLAGS 		:= -g -Wall -Werror -Wextra -std=c++98
#CPPFLAGS	:= -Iincludes

OBJETS := $(SOURCES:%.c=%.o)

.INTERMEDIATE:	$(OBJETS)

$(NAME) : $(OBJETS)
	$(CC) $(CFLAGS) $(OBJETS) $(LDFLAGS) -o $(NAME)

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	$(RM) *.o

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all
