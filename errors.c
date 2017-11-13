/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:47:09 by amuller           #+#    #+#             */
/*   Updated: 2017/11/11 16:00:34 by amuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		ft_21per21(char *str)
{
	int		i;
	int		hashtag;
	int		points;

	i = 0;
	hashtag = 0;
	points = 0;
	while (str[i])
	{
		if (str[i] == '.')
			points++;
		if (str[i] == '#')
			hashtag++;
		i++;
	}
	//if (str[i - 2] != '\n')
	//	i++;
	printf("%s\n", "Test de modulos");
	if ((i + 1) % 21 != 0)
		{
		if (str[i - 2] == '\n')
			return 0;
		printf("%d\n", i);
		
		}
	if (points % 12 != 0)
		{
	//	printf("%d\n", points);
		return (0);
		}
	if (hashtag % 4 != 0)
		return (0);
	printf("%s\n", "ft_21per21 OK");
	return (1);
}

int		ft_hashtag(char *str)
{
	int		i;
	int		hashtag;

	hashtag = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			hashtag++;
		if (str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0'))
		{
			if (hashtag != 4)
			{
				printf("%s\n", "return 0 sur ft_hashtag");
				return (0);
			}
			hashtag = 0;
		}
		i++;
	}
	printf("%s\n", "ft_hashtag OK");
	return (1);
}

int		ft_dotsandpoints(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '#' && str[i] != '.' && str[i] != '\n')
		{
			printf("%s\n", "return 0 sur ft_dotsandpoints");
			return (0);
		}
		i++;
	}
	printf("%s\n", "ft_dotsandpoints OK");
	return (1);
}

int		ft_forms(char *str)
{
	int		i;
	int		hashtag;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			if (str[i + 1] != '#' && str[i - 1] != '#' && str[i + 5] != '#'
					&& str[i - 5] != '#')
			{
				printf("%s\n", "return 0 sur ft_forms");
				return (0);
			}
		}
		i++;
	}
	printf("%s\n", "ft_forms OK");
	return (1);
}

int		ft_errors(char *str)
{
	if (ft_21per21(str) != 1)
		return (0);
	if (ft_hashtag(str) != 1)
		return (0);
	if (ft_dotsandpoints(str) != 1)
		return (0);
	if (ft_forms(str) != 1)
		return (0);
	printf("%s\n", "Tout OK.");
	return (1);
}
