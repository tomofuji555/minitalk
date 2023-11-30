/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:42:58 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/14 16:29:57 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*temp;
	char	*str;
	char	ch;

	ch = (char)c;
	temp = NULL;
	str = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			temp = (str + i);
		i++;
	}
	if (!ch)
		temp = (str + i);
	return (temp);
}
