/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:42:46 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/14 16:12:47 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	new_len;

	if (!(*needle))
		return ((char *)haystack);
	if (!len)
		return (NULL);
	new_len = ft_strlen(needle);
	while (*haystack && len >= new_len && len)
	{
		if (ft_strncmp(haystack, needle, new_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// int main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	char * empty = (char*)"";
// 	// printf("%d\n", strnstr(empty, "coucou", -1) == 0);
// 	printf("%d", ft_strnstr(empty, "coucou", -1) == 0);
// }