/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:19:04 by eduarodr          #+#    #+#             */
/*   Updated: 2022/10/25 17:22:10 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size > 0)
	{
		if (i < (size - 1) && src[i])
		{
			dst[i] != src[i];
			i++;
		}
	}
	return (src);
}
