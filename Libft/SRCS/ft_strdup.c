/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:00:05 by llonger           #+#    #+#             */
/*   Updated: 2017/11/08 19:17:11 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*s2;

	i = 0;
	s2 = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!s1 || !s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
