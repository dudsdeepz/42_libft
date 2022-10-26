/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:42:40 by eduarodr          #+#    #+#             */
/*   Updated: 2022/10/26 14:56:53 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	a1;
	unsigned char	a2;
	size_t			i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i <= n - 1)
	{
		while (s1[i] == s2[i])
			i++;
		break ;
	}
	a1 = s1[i];
	a2 = s2[i];
	return (a1 - a2);
}
