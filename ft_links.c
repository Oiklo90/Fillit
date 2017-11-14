/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_links.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:14:30 by amuller           #+#    #+#             */
/*   Updated: 2017/11/14 14:24:27 by amuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_links(char *str, int pieces)
{
	int		i;
	int		links;

	i = 0;
	links = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			if (str[i + 1] == '#')
				links++;
			if (str[i + 5] == '#')
				links++;
			if (str[i - 1] == '#')
				links++;
			if (str[i - 5] == '#')
				links++;
		}
		i++;
	}
	printf("Links=%d\n", links);
	if (links / pieces == 6 || links / pieces == 8)
		return (1);
	return (0);
}
