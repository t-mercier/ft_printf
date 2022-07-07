# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmercier <tmercier@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/12/02 17:13:26 by tmercier      #+#    #+#                  #
#    Updated: 2022/06/06 13:53:35 by timotheemer   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# --------------------------------- FILES ------------------------------------ #

SRC_FILES		=	libft/ft_atoi.c \
					libft/ft_calloc.c \
					libft/ft_hexlen.c \
					libft/ft_isalnum.c \
					libft/ft_isalpha.c \
					libft/ft_isascii.c \
					libft/ft_isdigit.c \
					libft/ft_islower.c \
					libft/ft_isprint.c \
					libft/ft_isupper.c \
					libft/ft_itoa.c \
					libft/ft_memchr.c \
					libft/ft_memcmp.c \
					libft/ft_memcpy.c \
					libft/ft_memmove.c \
					libft/ft_memset.c \
					libft/ft_nbrlen.c \
					libft/ft_putchar_fd.c \
					libft/ft_putendl_fd.c \
					libft/ft_putnbrbase_fd.c \
					libft/ft_putstr_fd.c \
					libft/ft_split.c \
					libft/ft_strchr.c \
					libft/ft_strdup.c \
					libft/ft_strjoin.c \
					libft/ft_strlcat.c \
					libft/ft_strlcpy.c \
					libft/ft_strcpy.c \
					libft/ft_striteri.c \
					libft/ft_strlen.c \
					libft/ft_strmapi.c \
					libft/ft_strncmp.c \
					libft/ft_strnstr.c \
					libft/ft_strrchr.c \
					libft/ft_strtrim.c \
					libft/ft_substr.c \
					libft/ft_tolower.c \
					libft/ft_toupper.c \
					ft_printf/char_conversion.c \
					ft_printf/num_conversion.c \
					ft_printf/ft_printf.c \

# --------------------------------- PATH ------------------------------------- #

OBJ_PATH 		= 	./obj

SRC_PATH		=	./ft_printf ./libft

INCLUDE			=	-I ./inc

# --------------------------------- MACRO ------------------------------------ #

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror -g3 

AR				=	ar rcs

# ------------------------------- COMPILE ------------------------------------ #

NAME 			=	libftprintf.a

NODIR_SRC 		=	$(notdir $(SRC_FILES))

OBJ 			=	$(addprefix $(OBJ_PATH)/, $(SRC_FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@printf "\n\n$(LIGHT_CYAN)LIBFTPRINTF COMPILED ✔️ $(GREEN)\n"
	@make signature


$(OBJ_PATH)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) -c $(CFLAGS) $(INCLUDE) $< -o $@

# --------------------------------- CLEAN ------------------------------------ #

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re graphic

## COLORS ## ________________________________________________ ANSI color codes #

GREEN			=	\033[1;32m
LIGHT_RED		=	\033[1;31m
LIGHT_CYAN		=	\033[1;36m
NO_COLOR		=	\033[0m

signature:
	@printf "+-----------------------+ © tmercier@student.codam.nl +\n"