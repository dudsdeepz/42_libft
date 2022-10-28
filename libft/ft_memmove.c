/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:16:59 by eduardo           #+#    #+#             */
/*   Updated: 2022/10/28 18:09:00 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = dest;
	if (a == b || n == 0)
	{
		while (n--)
		{
			a[n] = b[n];
		}
	}
	else
		ft_memcpy(b, a, n);
	return (dest);
}
