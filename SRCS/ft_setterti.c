/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_settetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:52:14 by llonger           #+#    #+#             */
/*   Updated: 2017/11/13 14:23:36 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_reset(char *tetri)
{
	while (*tetri)
	{
		if (*tetri == '}')
			*tetri = '#';
		tetri++;
	}
}
char	*ft_bigger_square(char	*feelit, int j)
{
	free(feelit);
	if ((ft_strnew((j + 2) * (j + 1))) == NULL)
		return (NULL);
	ft_start_sol(feelit, j + 1);
	return (feelit);
}

int		ft_set(char *tetri, int i, char *feelit, int index, char a)
{
	int		hashtag;
	int		len;

	hashtag = 0;
	len = 0;
	while (feelit[len] != '\n')
		++len;
	++len;
	if (i >= 0 && i < 20 && index >= 0 && index < (len * (len - 1)) &&
			feelit[index] == '.' && tetri[i] == '#')
	{
		tetri[i] = '}';
		feelit[index] = a;
		++hashtag;
if (a == 'H')
				printf("%s\n", feelit);
		hashtag += ft_set(tetri, i + 1, feelit, index + 1, a);
		hashtag += ft_set(tetri, i + 5, feelit, index + len, a);
		hashtag += ft_set(tetri, i - 1, feelit, index - 1, a);
	}
	return (hashtag);
}
