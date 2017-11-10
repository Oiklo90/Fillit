/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:04:15 by llonger           #+#    #+#             */
/*   Updated: 2017/11/08 15:04:16 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		a;

	a = 0;
	if (!f || !s)
		return (0);
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (0);
	while (s[a])
	{
		str[a] = f(s[a]);
		a++;
	}
	str[a] = '\0';
	return (str);
}
