/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:04:23 by llonger           #+#    #+#             */
/*   Updated: 2017/11/09 10:04:23 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long nnb;

	nnb = nb;
	if (nnb >= -2147483648 && nnb <= 2147483647)
	{
		if (nnb < 0)
		{
			ft_putchar('-');
			nnb = -nnb;
		}
		if (nnb >= 10)
		{
			ft_putnbr(nnb / 10);
			ft_putnbr(nnb % 10);
		}
		else
		{
			ft_putchar(nnb + '0');
		}
	}
}
