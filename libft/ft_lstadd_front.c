/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:28:21 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/17 16:07:36 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{	
		new->next = *lst;
		*lst = new;
	}
}
/*#include <stdio.h>
int	main(void)
{
	t_list *liste;
	t_list *node1;

	liste = ft_lstnew("main");
	node1 = ft_lstnew("node1de");

	ft_lstadd_front(&liste, node1);
	printf("%s", liste->content);
}*/
