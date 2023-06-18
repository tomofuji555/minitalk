# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 20:14:28 by marvin            #+#    #+#              #
#    Updated: 2023/06/09 20:14:28 by marvin           ###   ########.fr        #
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

all: ${NAME}

${NAME}: ${NAME_SERVER} ${NAME_CLIENT}

${NAME_SERVER}: ${OBJS_SERVER}
	make -C libft
	make -C ft_printf
	${CC} ${CFLAGS} libft/libft.a ft_printf/libftprintf.a ${SRCS_SERVER} -o ${NAME_SERVER}

${NAME_CLIENT}: ${OBJS_CLIENT}
	make -C libft
	make -C ft_printf
	${CC} ${CFLAGS} libft/libft.a ft_printf/libftprintf.a ${SRCS_CLIENT} -o ${NAME_CLIENT}

clean:
	${RM} ${OBJS_SERVER} ${OBJS_CLIENT}

fclean: clean
	${RM} ${NAME_SERVER} ${NAME_CLIENT}

re: fclean all

.PHONY: all clean fclean re