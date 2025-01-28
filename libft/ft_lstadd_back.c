/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:40:23 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/17 16:07:20 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*last;

	if (*list)
	{
		last = ft_lstlast(*list);
		last->next = new;
	}
	else
		*list = new;
}
/*#include <stdio.h>
int	main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	node1->content = ft_strdup("elma");
	node2->content = ft_strdup("armut");
	node3->content = ft_strdup("muz");

	node1->next = node2;
	ft_lstadd_back(&node1, node3);
	while (node1)
	{
		printf("%s\n", node1->content); 
		node1 = node1->next;
	}
}*/
