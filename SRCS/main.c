/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:59:27 by llonger           #+#    #+#             */
/*   Updated: 2017/11/10 13:59:27 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
//#include "fillit.h"

void	ft_error(void)
{
	ft_putendl("error");
	exit(EXIT_FAILURE);
}

int		main(int ac, char **av)
{
	int		fd;

	if (ac != 2)
	{
		ft_putendl("usage: ./fillit <file_name> \n \
	you need one file_name to run fillit, not zero, not two, \
not 1 000000000000!!!");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		ft_error();
}
