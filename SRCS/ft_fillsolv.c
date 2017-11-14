/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillsolv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 15:48:59 by llonger           #+#    #+#             */
/*   Updated: 2017/11/13 14:22:56 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_place(char *tetri, char *feelit, int index, char a)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tetri[i] != '#')
		i++;
	if (ft_set(tetri, i, feelit, index, a) == 4)
		return (1);
	while (feelit[j])
	{
		if (feelit[j] == a)
			feelit[j] = '.';
		++j;
	}
	return (0);
}

int		ft_fill(char **feelit, char **tetri , int index)
{
	char	*tmp;
	char	a;
	int		i;

	i = 0;
	a = 'A';
	if (tetri[index] == NULL)
		return (1);
	tmp = ft_strdup(*feelit);
	while ((*feelit)[i])
	{
		if (ft_place(tetri[index], *feelit, i, 'A' + index) == 0)
		{
			i++;
			printf("i = %d\n index = %d\n", i, index);
			continue ;
		}
		if (ft_fill(feelit, tetri, index + 1))
		{
			free(tmp);
			return (1);
		}
		free(*feelit);
		*feelit = ft_strdup(tmp);
	}
	free(tmp);
	return (0);
}

void	ft_start_sol(char *feelit, int j)
{
	int		i;

	i = 0;
	while (i < (j + 1) * j)
	{
		if ((i + 1) % (j + 1) == 0)
			feelit[i] = '\n';
		else
			feelit[i] = '.';
		++i;
	}
}

char	*ft_solver(char **tetri)
{
	char	*feelit;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tetri[i])
		i++;
	i = i * 4;
	while (j * j < i)
		j++;
	if ((feelit = (char *)malloc(sizeof(char) * ((j + 1) * j))) == NULL)
		return (NULL);
	ft_start_sol(feelit, j);
	ft_fill(&feelit, tetri, 0);
	ft_putstr(feelit);
	return (feelit);
}
