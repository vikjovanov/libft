# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 17:47:59 by vjovanov          #+#    #+#              #
#    Updated: 2018/12/07 12:54:50 by vjovanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GIT =
SRCS = ft_atoi.c ft_bzero.c ft_error.c ft_info.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isspace.c \
		ft_isupper.c ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c \
		ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
		ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
		ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c \
		ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
		ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
		ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
		ft_strncmp.c ft_strncpy.c ft_strndup.c ft_strnequ.c ft_strnew.c \
		ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c \
		ft_strtolower.c ft_strtoupper.c ft_strtrim.c ft_tolower.c \
		ft_toupper.c ft_warning.c ft_strclen.c get_next_line.c ft_swap.c \
		ft_sqrtnext.c ft_sqrt.c ft_swapi.c ft_2dtabdel.c ft_intset.c \
		ft_array_length.c ft_stoa.c ft_ctoa.c ft_ltoa.c ft_lltoa.c \
		ft_ustoa.c ft_uctoa.c ft_ultoa.c ft_ulltoa.c ft_uitoa.c \
		ft_dtoa/ft_dtoa.c ft_ldtoa/ft_ldtoa.c ft_ldtoa/ft_ldtoa_ext.c \
		ft_itoa_base.c ft_ltoa_base.c ft_lltoa_base.c ft_uitoa_base.c \
		ft_ultoa_base.c ft_ulltoa_base.c ft_atoull.c ft_atoll.c \
		ft_dtoa/ft_dtoa_ext.c ft_strreplace.c ft_strdupwc.c ft_strremove.c \
		ft_initarray.c
OBJ = $(notdir $(subst .c,.o,$(SRCS)))
SRCS_DIR = $(addprefix srcs/, $(SRCS))
INCLUDE = -Iincludes/ -Isrcs/ft_dtoa/ -Isrcs/ft_ldtoa/

######## FT_PRINTF ########

# SOURCE FILES

SRCS_PRINTF= ft_printf.c fill_data.c data.c config_checker.c config.c sub_checker.c \
		dispatcher.c set_type.c formatting.c
SRCS_DIR_PRINTF= $(addprefix srcs/ft_printf/, $(SRCS_PRINTF))

#OBJ
OBJ_PRINTF= $(subst .c,.o,$(SRCS_PRINTF))

#####

# SOURCES CONVERSION FUNCTION

SRCS_CONVERT_PRINTF = convert_char.c convert_double.c convert_hexa.c convert_int.c \
				convert_hexa_upper.c convert_octal.c convert_pointer.c \
				convert_string.c convert_unsigned.c convert_percent.c \
				convert_binary.c
SRCS_CONVERT_DIR_PRINTF= $(addprefix srcs/ft_printf/convert/, $(SRCS_CONVERT_PRINTF))

#OBJ
OBJ_CONVERT_PRINTF = $(subst .c,.o, $(SRCS_CONVERT_PRINTF))

#####

# SOURCES FLAGS FUNCTION

SRCS_FLAGS_PRINTF = flags.c generic_flags.c min_field_width.c octal_flags.c \
			 hexa_flags.c binary_flags.c binary_flags_ext.c

SRCS_FLAGS_DIR_PRINTF= $(addprefix srcs/ft_printf/flags/, $(SRCS_FLAGS_PRINTF))

#OBJ
OBJ_FLAGS_PRINTF = $(subst .c,.o, $(SRCS_FLAGS_PRINTF))

###########################


WFLAGS = -Wall -Wextra -Werror 

GCCRESET=\033[0m
GCCBLUE=\033[1;36m

all: $(NAME)

$(NAME):
	@gcc $(WFLAGS) -c $(SRCS_DIR) $(SRCS_DIR_PRINTF) $(SRCS_CONVERT_DIR_PRINTF) $(SRCS_FLAGS_DIR_PRINTF) $(INCLUDE)
	@echo "Compilation des fichiers sources $(GCCBLUE)<libft>$(GCCRESET)..."
	@ar rc $(NAME) $(OBJ) $(OBJ_PRINTF) $(OBJ_FLAGS_PRINTF) $(OBJ_CONVERT_PRINTF)
	@echo "Creation de la librairie $(GCCBLUE)<libft>$(GCCRESET)..."
	@ranlib $(NAME)
	@echo "Indexation de la librairie $(GCCBLUE)<libft>$(GCCRESET)..."

clean:
	@/bin/rm -rf $(OBJ) $(OBJ_PRINTF) $(OBJ_FLAGS_PRINTF) $(OBJ_CONVERT_PRINTF)
	@echo "Suppression des fichiers objet $(GCCBLUE)<libft>$(GCCRESET)..."

fclean: clean
	@rm -rf $(NAME)
	@echo "Suppression de la librairie $(GCCBLUE)<libft>$(GCCRESET)..."

re: fclean all

.PHONY: clean all fclean re
