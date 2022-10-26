/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:50:34 by eduardo           #+#    #+#             */
/*   Updated: 2022/10/26 11:46:40 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_size;

int	atoi(const char *nptr);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
void	bzero(void *s, size_t n);
size_t	ft_strlen(const char *str);


size_t	ft_strlen(const char *str);
size_t	strlcat(char *dst, const char *src, size_t size);
size_t	strlcpy(char *dst, const char *src, size_t size);
int	strncmp(const char *s1, const char *s2, size_t n);
char	*strnstr(const char *big, const char *little, size_t len);
void	*memset(void *s, int c, size_t n);

char	*strchr(const char *s, int c);
char	*strdup(const char *s);



#endif
