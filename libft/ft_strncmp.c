/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:59:41 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/06 11:46:28 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && (str1[i] || str2[i]))
	{
		if ((unsigned char) str1[i] > (unsigned char)str2[i])
			return (1);
		else if ((unsigned char) str1[i] < (unsigned char) str2[i])
			return (-1);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[] = "selam";
	char str2[] = "selam";
	char st1[] = "selam";
	char st2[] = "selam";
	size_t size;

	size  = 0;
	//printf("%d", strncmp(str1, str2, size));
	printf("%d", strncmp("testg", "tests", 6));
	//printf("\n \377");
}*/
