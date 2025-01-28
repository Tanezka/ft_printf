/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:58:03 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/05 23:49:00 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	c = 0;
	while (src[c])
		c++;
	if (dstsize == 0)
		return (c);
	i = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dest[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dest[] = "12345";
	char src[] = "abcde";
	int dstsize;

	*dest = *a;
	*dest2 = *a;
	dstsize = 2;
	//dest2 = dest;
	//src2 = src;
	//printf("%lu\n", strlcpy(dest, src, dstsize));
	//printf("dest1: %s\n", dest);
	printf("%zu \n", ft_strlcpy(dest, "lorem ipsum", dstsize));
	printf("%s\n", dest);
}*/
