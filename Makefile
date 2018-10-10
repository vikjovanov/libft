# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 17:47:59 by vjovanov          #+#    #+#              #
#    Updated: 2018/10/08 14:46:00 by vjovanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GIT =
SRCS = $(wildcard *.c)
OBJ = $(subst .c,.o,$(SRCS))
INCLUDE = .

WFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	@gcc $(WFLAGS) -c $(SRCS) -I $(INCLUDE)
	@echo "Compilation des fichiers sources..."
	@ar rc $(NAME) $(OBJ)
	@echo "Creation de la librairie..."
	@ranlib $(NAME)
	@echo "Indexation de la librairie..."

clean:
	@/bin/rm -rf $(OBJ)
	@echo "Suppression des fichiers objet..."

fclean: clean
	@rm -rf $(NAME)
	@echo "Suppression de la librairie..."

re: fclean all

.PHONY: clean all fclean re
