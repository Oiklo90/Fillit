/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:41:09 by llonger           #+#    #+#             */
/*   Updated: 2017/11/08 09:41:09 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		letter;
	size_t				i;

	str = (unsigned char *)s;
	letter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == letter)
			return (str + i);
		i++;
	}
	return (NULL);
}
