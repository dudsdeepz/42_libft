/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:16:59 by eduardo           #+#    #+#             */
/*   Updated: 2022/10/30 17:21:27 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	b = (char *) dest;
	a = (char *) src;
	if (a != b)
	{
		ft_memcpy(b, a, n);
		return (dest);
	}
	else if (src < dest)
	{
		a[n - 1] = b[n - 1];
		n--;
	}
	else
		while (n--)
			a = b;
	return (dest);
}

