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

static unsigned char c;
static int i;

void signal_process(int sig, siginfo_t *info, void *ucontext)
{
	c << 1;
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

int main (void)
{
	struct sigaction	sa;
	
	ft_printf ("server.pid = %d\n", getpid());
	ft_memset (&sa, 0, sizeof (sa));
	sa.sa_handler = signal_process;
	sigaction (SIGUSR1, &sa, NULL);
	sigaction (SIGUSR2, &sa, NULL);
	while (1)
	{
        pause();
    }
	return (0);
}
