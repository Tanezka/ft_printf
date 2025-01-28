/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:02:09 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/17 16:09:23 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	t_list	*newlist;

	newlist = ft_lstnew((*f)(lst->content));
	if (lst && *f && *del)
	{
		lst = lst->next;
		while (lst)
		{
			ft_lstadd_back(&newlist, ft_lstnew((*f)(lst->content)));
			lst = lst->next;
		}
		return (newlist);
	}
	return (NULL);
}
/*
void	*fuck(void *list)
{
	t_list *lst;
	lst = (t_list *) (list);
	//printf("listenin içi: %c\n",(char ) lst->content);
	((t_list *)list)->content += 1;
	return (lst->content);
}

void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void    ft_del(void *content)
{
	free(content);
}
int main(void)
{
	t_list *liste;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *yenilist;

	liste = malloc(1 * sizeof(char *));
	node1 = malloc(1 * sizeof(char *));
	node2 = malloc(1 * sizeof(char *));
	node3 = malloc(1 * sizeof(char *));

	liste->content = ft_strdup("lorem");
	node1->content = ft_strdup("ipsum");
	node2->content = ft_strdup("dolor");
	node3->content = ft_strdup("sit");

	liste->next = node1;
	node1->next = node2;
	node2->next = node3;

	yenilist = ft_lstmap(liste, ft_map, ft_del);
	while (liste)
	{
		printf("liste: %s\nyeniliste: %s\n", liste->content, yenilist->content);
		liste = liste->next;
		yenilist = yenilist->next;
	}
}*/
