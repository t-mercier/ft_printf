# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmercier <tmercier@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/12/02 17:13:26 by tmercier      #+#    #+#                  #
#    Updated: 2022/02/28 13:49:43 by tmercier      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

## VARIABLES ##_________________________________________________ sources files #

SRCS			=	ft_atoi.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_hexlen.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_islower.c \
					ft_isprint.c \
					ft_isupper.c \
					ft_itoa.c \
					ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_nbrlen.c \
					ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c \
					ft_putunsigned_base_fd.c \
					ft_split.c \
					ft_strchr.c \
					ft_strdup.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strcpy.c \
					ft_striteri.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_substr.c \
					ft_tolower.c \
					ft_toupper.c

INCS			=	-I ../include

#_________________________________________________________________ path macros #

DIR_OBJ 		= 	obj

#________________________________________________________________ tool macros #

CC				=	gcc

CFLAGS 			=	-g

CCFLAGS			=	-Wall -Wextra -Werror

AR				=	ar rcs

## RULES ## ________________________________________________ compilation rules #

NAME 			=	libft.a

NODIR_SRC 		=	$(notdir $(SRCS))

OBJS 			=	$(addprefix $(DIR_OBJ)/, $(SRCS:c=o))

.PHONY: clean fclean re graphic

all: $(NAME)

$(NAME):  $(OBJS) 
	@$(AR) $(NAME) $(OBJS)
	@make graphic

$(DIR_OBJ)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) -o $@ -c $< $(CFLAGS) $(CCFLAGS) $(INCS)
	@echo "\033[96m	$@\033[0m"

clean:
	@if [ -d "$(DIR_OBJ)" ]; then rm -r $(DIR_OBJ); fi
	@printf "$(LIGHT_RED)\n-> obj files removed.\n"

fclean: clean
	@rm -rf $(NAME)
	@printf "\n$(LIGHT_RED)-> $(NAME) removed.\n\n"

re: fclean all

graphic:
	@printf "\n\n$(LIGHT_CYAN)LIBFT COMPILED ✔️ $(GREEN)\n"

## COLORS ## ________________________________________________ ANSI color codes #

BLACK			=	\033[0;30m
RED				=	\033[0;31m
GREEN			=	\033[1;32m
ORANGE			=	\033[0;33m
BLUE			=	\033[0;34m
PURPLE			=	\033[0;35m
CYAN			=	\033[0;36m
LIGHT_GRAY		=	\033[0;37m
DARK_GRAY		=	\033[1;30m
LIGHT_RED		=	\033[1;31m
LIGHT_GREEN		=	\033[1;32m
YELLOW			=	\033[1;33m
LIGHT_BLUE		=	\033[1;34m
LIGHT_PURPLE	=	\033[1;35m
LIGHT_CYAN		=	\033[1;36m
WHITE			=	\033[1;37m
NO_COLOR		=	\033[0m
