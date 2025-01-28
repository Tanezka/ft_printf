/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:46:54 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/17 16:08:55 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>
int	main(void)
{
	t_list *liste1 = NULL;
	t_list *node1;
	//t_list *node2;

	//liste1 = (t_list *)malloc(sizeof (t_list));
	node1 = (t_list *)malloc(sizeof (t_list));
	//node2 = (t_list *)malloc(sizeof (t_list));

	//liste1->next = node1;
	//node1->next = node2;
	//node2->next = NULL;

	//liste1->content = ft_strdup("selam");
	//node1->content = (void *) 1;
	//node2->content = ft_strdup("son nod");

	//if (ft_lstlast(liste1) == 0)
	//	printf("null dayı bu");
	liste1 = (t_list *)malloc(sizeof (t_list));
	liste1->next = node1;
	node1->content = "başardım";
	printf("%s", ft_lstlast(liste1)->content);
	//if (ft_lstlast(liste1)->content == (void*)1)
	//	printf("\nvoid bu");
	//printf("%s\n", (char *)ft_lstlast(liste1)->content);
}*/
