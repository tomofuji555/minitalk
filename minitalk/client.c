/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:20:35 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/06/06 16:24:47 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void send_bit_char (pid_t pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (c & (1 << i))
			kill (pid, SIGUSR1);
		else
			kill (pid, SIGUSR2);
		i--;
	}
}

void send_bit_string (pid_t pid, char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		send_bit_char(pid, str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	pid_t	pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		send_bit_string (pid, argv[2]);
	}
	else
		return (-1);
}