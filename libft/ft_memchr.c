/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:30:22 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/09 17:35:03 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	size_t			i;

	str = (char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char) c)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *str;
	int c;
	size_t n;

	char s[] = {0, 1, 2, 3, 4, 5};
	c = 2;
	n = 2;
	if (ft_memchr(s, 2 + 256, 3) == s + 2)
		printf("geçti");
	//str = ft_memchr("bonjour", 'u', 4);
	//int tab[7] = {-49, 49, 1, 3, 0, -2, 2};
	//printf("bişer: %d\n", s[1]);
	//printf("%s", (char *) ft_memchr("umut", 'm', 6));
	//printf("%s", str);
}*/
