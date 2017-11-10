/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:55:05 by llonger           #+#    #+#             */
/*   Updated: 2017/11/08 11:55:06 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t a;
	size_t b;

	a = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while ((s1[a] != '\0') && (a < len))
	{
		b = 0;
		while (s2[b] == s1[a + b] && (b + a <= len))
		{
			b++;
			if (s2[b] == '\0')
				return ((char *)s1 + a);
		}
		a++;
	}
	return (NULL);
}
