/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 13:50:29 by llonger           #+#    #+#             */
/*   Updated: 2017/11/08 11:45:35 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	long	result;
	int		neg;

	neg = 0;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		result = result + (int)str[i] - '0';
		result = result * 10;
		i++;
	}
	if (neg == 1)
		return (-result / 10);
	return (result / 10);
}
