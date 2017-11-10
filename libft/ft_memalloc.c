/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:03:03 by llonger           #+#    #+#             */
/*   Updated: 2017/11/09 16:41:12 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mall;

	if ((mall = (char *)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while (size--)
		mall[size] = 0;
	return ((void *)mall);
}
