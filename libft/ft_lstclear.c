/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:22:21 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/17 16:07:52 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (*lst && *del)
	{	
		while (*lst && lst)
		{
			ptr = (*lst)->next;
			(*del)((*lst)->content);
			free (*lst);
			*lst = ptr;
		}
	}
}
