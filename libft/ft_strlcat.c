/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:15 by eduardo           #+#    #+#             */
/*   Updated: 2022/10/26 12:18:48 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		dst_len;
	int		src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= 0)
		return (dst_len);
	while (dst_len < size)
	{
		dst[dst_len] = src[i]
			dst_len++;
			i++;
	}
	dst[dst_len] = '\0';
	return (ft_strlen(dst));
}
