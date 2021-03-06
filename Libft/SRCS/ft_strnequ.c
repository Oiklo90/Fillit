/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:54:01 by llonger           #+#    #+#             */
/*   Updated: 2017/11/08 15:54:01 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] != '\0' && n > 0)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
		n--;
	}
	return (1);
}
