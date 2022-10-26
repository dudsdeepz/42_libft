/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:21 by eduardo           #+#    #+#             */
/*   Updated: 2022/10/26 12:02:16 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*a;
	size_t	i;

	if (!s)
		return (NULL);
	a = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!a)
		return (NULL);
	i = 0;
	while (s[i])
	{
		a[i] = s[i]
			i++;
	}
	a[i] = 0
		return (a);
}
