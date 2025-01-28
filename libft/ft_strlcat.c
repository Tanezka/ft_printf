/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:56:40 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/05 23:14:56 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[50];
	//char src[] = "dostum";
	//char dest[99] = "deneme12rr";
	//char src[99] = "testxyz";
	//int i;
	//char dest[30]; memset(dest, 0, 30);
	//char * src = (char *)"AAAAAAAAA";
	//dest[0] = 'B';
	memset(dest, 'r', 14);
	printf("%zu\n", strlcat(dest, "lorem ipsum dolor sit amet", 15));
	write(1, "\n", 1);
	write(1, dest, 15);
	//i = 7;
	//printf("%lu \n", sizeof dest);
	//printf("%lu \n", strlcat(dest, src, 10));
	//strlcat(dest, src, sizeof dest);
	//printf("%s", dest);

}*/
