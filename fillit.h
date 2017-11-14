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
# define BUFFSIZE	567
# define MSIZE		27
char	**ft_read_file(int fd);
int		main(int ac, char **av);
int		ft_errors(char *str);
int		ft_set(char *tetri, char *feelit, int pos);
void	ft_fill(char *feelit, char **tetri , int pos, int i);
char	*ft_start_sol(char *feelit, int j);
char	*ft_solver(char **tetri);

#endif
