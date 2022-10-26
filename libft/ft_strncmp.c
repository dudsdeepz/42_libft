/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:42:40 by eduarodr          #+#    #+#             */
/*   Updated: 2022/10/26 16:43:58 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1 == s2 && s1[i] != '\0')
	{
		if (i < n)
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
