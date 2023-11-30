/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:20:39 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/06/06 16:28:49 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

void	signal_process(int sig)
{
	static int				i;
	static unsigned char	c;

	c = c << 1;
	if (sig == SIGUSR1)
		c = c + 1;
	i++;
	if (i == 8)
	{
		write (1, &c, 1);
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	ft_printf ("server.pid = %d\n", getpid());
	signal (SIGUSR1, signal_process);
	signal (SIGUSR2, signal_process);
	while (1)
		pause();
	return (0);
}
