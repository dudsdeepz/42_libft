/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:42:40 by eduarodr          #+#    #+#             */
/*   Updated: 2022/10/25 16:01:33 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	a1;
	unsigned char	a2;
	size_t			i;

	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] == s2[i])
			i++;
		break ;
	}
	a1 = s1[i];
	a2 = s2[i];
	return (a1 - a2);
}
