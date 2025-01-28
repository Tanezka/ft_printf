/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:32:50 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/09 17:46:55 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i])
	{	
		if (str[i] == (char) c)
		{
			return ((char *) str + i);
		}
		i++;
	}
	if (c == '\0')
		return ((char *) str + i);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "bonjour";

	printf("%s\n", ft_strchr(str, '\0'));
	printf("%s", str);
}*/
