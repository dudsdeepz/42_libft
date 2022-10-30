/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:15 by eduardo           #+#    #+#             */
/*   Updated: 2022/10/30 17:22:44 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	if (!size)
		return (0);
	if (size - 1 <= ft_strlen(dst))
		return (size + ft_strlen(src));
	a = ft_strlen(dst);
	b = 0;
	while (a + b < size - 1)
	{
		dst[a + b] = src[b];
		b++;
	}
	dst[a + b] = '\0';
	return (a + ft_strlen(src));
}

