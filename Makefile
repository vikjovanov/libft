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

######## LIBFT ########

# SOURCE FILES

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
		ft_initarray.c ft_nblen.c ft_implode.c ft_strsplitfunc.c

######## FT_PRINTF ########

# SOURCE FILES

SRCS_PRINTF= ft_printf.c fill_data.c data.c config_checker.c config.c sub_checker.c \
		dispatcher.c set_type.c formatting.c
SRCS_DIR_PRINTF= $(addprefix ft_printf/, $(SRCS_PRINTF))
SRCS+= $(SRCS_DIR_PRINTF)

#####

# SOURCES CONVERSION FUNCTION

SRCS_CONVERT_PRINTF = convert_char.c convert_double.c convert_hexa.c convert_int.c \
				convert_hexa_upper.c convert_octal.c convert_pointer.c \
				convert_string.c convert_unsigned.c convert_percent.c \
				convert_binary.c
SRCS_CONVERT_DIR_PRINTF= $(addprefix ft_printf/convert/, $(SRCS_CONVERT_PRINTF))
SRCS+= $(SRCS_CONVERT_DIR_PRINTF)

#####

# SOURCES FLAGS FUNCTION

SRCS_FLAGS_PRINTF = flags.c generic_flags.c min_field_width.c octal_flags.c \
			 hexa_flags.c binary_flags.c binary_flags_ext.c

SRCS_FLAGS_DIR_PRINTF= $(addprefix ft_printf/flags/, $(SRCS_FLAGS_PRINTF))
SRCS+= $(SRCS_FLAGS_DIR_PRINTF)

###########################

OBJ=$(SRCS:.c=.o)
SRCS_DIR = srcs/
OBJ_DIR = obj/
INCLUDE = -Iincludes/ -Isrcs/ft_dtoa/ -Isrcs/ft_ldtoa/
OBJS_DIR = $(addprefix $(OBJ_DIR), $(OBJ))

CC= gcc
CFLAGS = -Wall -Wextra -Werror 

GCCRESET=\033[0m
GCCBLUE=\033[1;36m
GCCBBLUE=\033[1;91m
GCCYELLOW=\033[1;33m
GCCGREEN=\033[1;32m
GCCRED=\033[1;31m

all:
	@mkdir -p $(OBJ_DIR)
	@make $(NAME)

$(NAME): $(OBJS_DIR)
	@ar rc $(NAME) $(OBJS_DIR)
	@echo "$(GCCBLUE)$(basename $(NAME)): $(GCCRESET)Librairie compilé $(GCCGREEN)-- $(NAME)$(GCCRESET)"
	@ranlib $(NAME)
	@echo "$(GCCBLUE)$(basename $(NAME)): $(GCCRESET)Indexation $(GCCGREEN)-- $(NAME)$(GCCRESET)"
	@echo "$(GCCBLUE)$(basename $(NAME)): $(GCCRESET)$(GCCGREEN)SUCCESS$(GCCRESET)"

$(OBJ_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	@echo "$(GCCBLUE)$(basename $(NAME)): $(GCCRESET)Compilation $(GCCGREEN)-- $(basename $(notdir $<))$(GCCRESET)"


clean:
	@rm -Rf $(OBJ_DIR)
	@echo "$(GCCBLUE)$(basename $(NAME)): $(GCCRESET)Suppression $(GCCRED)-- $(OBJ_DIR)$(GCCRESET)"

fclean: clean
	@rm -Rf $(NAME)
	@echo "$(GCCBLUE)$(basename $(NAME)): $(GCCRESET)Suppression $(GCCRED)-- $(NAME)$(GCCRESET)"

re: fclean all

.PHONY: clean all fclean re
