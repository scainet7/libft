# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snino <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 16:23:18 by snino             #+#    #+#              #
#    Updated: 2022/12/05 18:35:28 by snino            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	libft.a

SRCS			:=	$(addprefix Part1/,\
					ft_isalpha.c\
					ft_isdigit.c\
					ft_isalnum.c\
					ft_isascii.c\
					ft_isprint.c\
					ft_strlen.c\
					ft_memset.c\
					ft_bzero.c\
					ft_memcpy.c\
					ft_memmove.c\
					ft_strlcpy.c\
					ft_strlcat.c\
					ft_toupper.c\
					ft_tolower.c\
					ft_strchr.c\
					ft_strrchr.c\
					ft_strncmp.c\
					ft_memchr.c\
					ft_memcmp.c\
					ft_strnstr.c\
			 		ft_atoi.c\
			 		ft_calloc.c\
			 		ft_strdup.c)\
			 		$(addprefix Part2/,\
			 		ft_substr.c\
			 		ft_strjoin.c\
			 		ft_strtrim.c\
			 		ft_split.c\
			 		ft_itoa.c\
			 		ft_strmapi.c\
			 		ft_striteri.c\
			 		ft_putchar_fd.c\
			 		ft_putstr_fd.c\
			 		ft_putendl_fd.c\
					ft_putnbr_fd.c)\
					$(addprefix Bonus_Part/,\
					ft_lstnew.c\
					ft_lstadd_front.c\
					ft_lstsize.c\
					ft_lstlast.c\
					ft_lstadd_back.c\
					ft_lstdelone.c\
					ft_lstclear.c\
                    ft_lstiter.c\
                    ft_lstmap.c)\
                    $(addprefix Other_and_Personal/,\
                    ft_isspace.c\
                    ft_strcat.c\
                    ft_strcdup.c\
                    ft_strstr.c\
                    ft_getword_mod.c\
                    ft_freelst.c\
					get_next_line.c\
					get_next_line_utils.c)\


HEADER			:=	libft.h

OBJ_DIR			:=	obj

OBJ				:=	$(addprefix $(OBJ_DIR)/, $(patsubst %.c, %.o, $(SRCS)))

CC				:=	gcc

CFLAGS			:=	-Wall -Wextra -Werror

.PHONY			:	all claen fclean re

all				:	$(NAME)

$(NAME)			:	$(HEADER) $(OBJ)
					ar rc $(NAME) $(OBJ)

$(OBJ_DIR)/%.o	:  	%.c $(HEADER)
					@mkdir -p $(OBJ_DIR)/Part1
					@mkdir -p $(OBJ_DIR)/Part2
					@mkdir -p $(OBJ_DIR)/Bonus_Part
					@mkdir -p $(OBJ_DIR)/Other_and_Personal
					$(CC) $(CFLAGS) -c $< -o $@

clean			:
					@rm -f $(OBJ)

fclean			:	clean
					@$(RM) $(NAME)
					@rm -rf obj
re				:		fclean all
