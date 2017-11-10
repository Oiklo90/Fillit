/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 16:22:04 by llonger           #+#    #+#             */
/*   Updated: 2017/11/07 17:33:19 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t a;
	size_t lon;

	lon = 0;
	a = ft_strlen(s1);
	while (lon < n && s2[lon])
	{
		s1[a + lon] = s2[lon];
		lon++;
	}
	s1[a + lon] = '\0';
	return (s1);
}
