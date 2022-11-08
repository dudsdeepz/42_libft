/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:20:41 by eduardo           #+#    #+#             */
/*   Updated: 2022/11/08 18:44:51 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(unsigned int a, unsigned int c)
{
	int	i;

	i = 0;
	if (a >= c)
	{
		i = a - (c + 1);
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*i;
	size_t	b;
	size_t	c;

	if (!s)
		return (NULL);
	check(start, ft_strlen(s));
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
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
