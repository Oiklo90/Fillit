/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:55:53 by llonger           #+#    #+#             */
/*   Updated: 2017/11/09 12:55:54 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;

	if (!(begin = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (lst && f)
	{
		begin = f(lst);
		if (lst)
			begin->next = ft_lstmap(lst->next, f);
	}
	return (begin);
}
