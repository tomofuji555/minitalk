/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:41:32 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/14 17:41:21 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	if (!size)
		return (s_len);
	d_len = ft_strlen(dst);
	if (d_len >= size)
		return (size + s_len);
	i = 0;
	j = d_len;
	if (d_len < size)
	{
		while (i < size - d_len - 1 && src[i])
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	return (d_len + s_len);
}
