/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:37:46 by llonger           #+#    #+#             */
/*   Updated: 2017/11/11 14:37:48 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# define BUFFSIZE	630
# define MSIZE		30
char	**ft_read_file(int fd);
int		main(int ac, char **av);
int		ft_errors(char *str);

#endif
