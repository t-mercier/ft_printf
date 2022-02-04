# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmercier <tmercier@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/12/02 17:13:26 by tmercier      #+#    #+#                  #
#    Updated: 2022/02/04 15:22:56 by tmercier      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/sh

## VARIABLES ##_________________________________________________ sources files #

SRCS			=	ft_printf/ft_char_conversion.c \
				ft_printf/ft_num_conversion.c \
				ft_printf/ft_printf.c
			
INCS 			=	libftprintf.h

#_________________________________________________________________ path macros #

LIBFT_DIR		=	libft

DIR_OBJ 		= 	obj

#_________________________________________________________tools && path macros #

CC			=	gcc

CFLAGS 			=	-g

CCFLAGS			=	-Wall -Wextra -Werror

AR			=	ar rcs

## RULES ## ________________________________________________ compilation rules #

NAME 			=	libftprintf.a

LIBFT			=	libft

NODIR_SRC 		=	$(notdir $(SRCS))

OBJS 			=	$(addprefix ft_printf/$(DIR_OBJ)/, $(SRCS:c=o))

INC_DIRS 		= 	$(addprefix -I, $(INCS))

.PHONY: clean fclean re graphic

all: $(NAME)

ft_printf/$(DIR_OBJ)/%.o: %.c $(INCS)
	@mkdir -p $(@D)
	@$(CC) -o $@ -c $< $(CFLAGS) $(CCFLAGS) $(INC_DIRS)
	@echo "\033[96m	$@\033[0m"

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@make graphic

clean:
	@if [ -d "$(LIBFT)/obj" ]; then rm -r $(LIBFT)/obj; fi
	@if [ -d "ft_printf/$(DIR_OBJ)" ]; \
	then rm -r ft_printf/$(DIR_OBJ); fi

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(LIBFT)/libft.a

re: fclean all

graphic:
	@printf "\n$(LIGHT_CYAN)LIBFTPRINTF COMPILED ✔️ \n\n$(GREEN)"
	@printf "+-----------------------+ © tmercier@student.codam.nl +\n"
	@printf "|                                                     | \n"
	@printf "|   ███╗   ███╗ █████╗ ██╗  ██╗███████╗         ██╗   | \n"    
	@printf "|   ████╗ ████║██╔══██╗██║ ██╔╝██╔════╝        ██╔╝  $(GREEN) | \n"
	@printf "|   ██╔████╔██║███████║█████╔╝ █████╗         ██╔╝  $(GREEN)  | \n"
	@printf "|   ██║╚██╔╝██║██╔══██║██╔═██╗ ██╔══╝     ██╗██╔╝  $(GREEN)   | \n" 
	@printf "|   ██║ ╚═╝ ██║██║  ██║██║  ██╗███████╗    ╚██╔╝  $(GREEN)    | \n"
	@printf "|   ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝     ╚═╝  $(GREEN)     | \n"
	@printf "|                                                     | \n"
	@printf "+-----------------------------------------------------+ \n"
	@printf "\n\n"

## COLORS ##_________________________________________________ ANSI color codes #

BLACK			=	\033[0;30m
RED			=	\033[0;31m
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
LIGHT_PURPLE		=	\033[1;35m
LIGHT_CYAN		=	\033[1;36m
WHITE			=	\033[1;37m
NO_COLOR		=	\033[0m
