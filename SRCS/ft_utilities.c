/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:48:57 by llonger           #+#    #+#             */
/*   Updated: 2017/11/11 14:48:58 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_read_file(int fd)
{
	char	**tetri;
	char	buff[BUFFSIZE + 1];
	int		i;
	int		j;

	if ((tetri = (char **)malloc(sizeof(char *) * MSIZE + 1)) == NULL)
		return (NULL);
	if (read(fd, buff, BUFFSIZE) <= 0)
		return (NULL);
	if (!ft_errors(buff))
		return (NULL);

	while (buff[j])
	{
		tetri[i] = ft_strsub(buff, i * 21, 21);
		j += 21;
		i++;
	}
	return (tetri);
}