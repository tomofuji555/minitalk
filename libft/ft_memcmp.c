/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:38:35 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/14 16:27:14 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (i < n - 1 && t1[i] == t2[i])
	{
		if (!n)
			return (0);
		i++;
	}
	return (t1[i] - t2[i]);
}

// int main ()
// {
// 	const char s1[] = "abcde";
// 	const char t1[] = "abdce";
// 	const char s2[] = "acbde";
// 	const char t2[] = "abcde";
// 	printf("%d\n", memcmp(s1, t1, 3));
// 	printf("%d\n", ft_memcmp(s1, t1, 3));
// 	printf("%d\n", memcmp(s2, t2, 3));
// 	printf("%d\n", ft_memcmp(s2, t2, 3));
// }
