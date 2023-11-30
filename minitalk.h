/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:19:41 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/05/22 20:45:27 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

void	send_bit_char(pid_t pid, char c);
void	send_bit_string(pid_t pid, char *str);
int		num_check(char *num);
void	signal_process(int sig);

#endif