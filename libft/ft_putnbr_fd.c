/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:36:34 by llonger           #+#    #+#             */
/*   Updated: 2017/11/09 10:36:35 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long nnb;

	nnb = nb;
	if (nnb >= -2147483648 && nnb <= 2147483647)
	{
		if (nnb < 0)
		{
			ft_putchar_fd('-', fd);
			nnb = -nnb;
		}
		if (nnb >= 10)
		{
			ft_putnbr_fd(nnb / 10, fd);
			ft_putnbr_fd(nnb % 10, fd);
		}
		else
		{
			ft_putchar_fd(nnb + '0', fd);
		}
	}
}
