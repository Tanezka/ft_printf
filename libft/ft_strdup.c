/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:37:25 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/05 21:25:15 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*array;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	array = malloc(ft_strlen(s) + 1);
	while (s[i])
	{
		array[i] = s[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
/*
int main(void)
{
	char str[] = "severim";
	char *str2;
	str2 = ft_strdup(str);
	str [0] = 'd';
	str2[0] = 't';
	printf("Str1: %s\nStr2: %s", str, str2);
}*/
