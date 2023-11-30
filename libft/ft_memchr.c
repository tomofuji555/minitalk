/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:38:21 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/01 18:38:22 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	ch;
	size_t			i;

	s1 = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == ch)
			return (s1 + i);
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	const char s[] = "aiueo";
// 	printf("%s\n", memchr(s, '\0', 30));
// 	printf("%s\n", ft_memchr(s, '\0', 30));
// }
