/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:20:41 by eduardo           #+#    #+#             */
/*   Updated: 2022/10/31 12:24:25 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*i;
	size_t	b;
	size_t	c;

	if (!s)
		return (NULL);
	i = (char *)malloc(sizeof(*s) * (len + 1));
	if (!i)
		return (NULL);
	b = 0;
	c = 0;
	while (s[b])
	{
		if (b >= start && len > c)
		{
			i[c] = s[b];
			c++;
		}
		b++;
	}
	i[c] = '\0';
	return (i);
}
