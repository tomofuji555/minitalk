# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 15:57:54 by tofujiwa          #+#    #+#              #
#    Updated: 2023/06/12 15:57:54 by tofujiwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
NAME_SERVER = server
NAME_CLIENT = client
SRCS_SERVER = server.c
OBJS_SERVER = ${SRCS_SERVER:.c=.o}
SRCS_CLIENT = client.c
OBJS_CLIENT = ${SRCS_CLIENT:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: ${NAME}

${NAME}: ${NAME_SERVER} ${NAME_CLIENT}

${NAME_SERVER}: ${SRCS_SERVER}
	make -C libft
	make -C ft_printf
	${CC} ${CFLAGS} libft/libft.a ft_printf/libftprintf.a ${SRCS_SERVER} -o ${NAME_SERVER}

${NAME_CLIENT}: ${SRCS_CLIENT}
	$(MAKE) -C libft
	$(MAKE) -C ft_printf
	${CC} ${CFLAGS} libft/libft.a ft_printf/libftprintf.a ${SRCS_CLIENT} -o ${NAME_CLIENT}

clean:
	make -C libft clean
	make -C ft_printf clean
	$(RM) ${OBJS_SERVER} ${OBJS_CLIENT}

fclean: clean
	make -C libft fclean
	make -C ft_printf fclean
	$(RM) ${NAME_SERVER} ${NAME_CLIENT}

re: fclean all

.PHONY: all clean fclean re