/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 12:38:19 by llonger           #+#    #+#             */
/*   Updated: 2017/11/07 17:43:41 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t a;

	a = 0;
	if (n == 0)
		return (0);
	while ((s1[a] != '\0') && (s2[a] != '\0')
		&& (s1[a] == s2[a]) && a < (n - 1))
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
