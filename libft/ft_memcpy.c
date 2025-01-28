/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:30:36 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/05 19:55:25 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *srcc, size_t len)
{
	size_t	i;
	char	*dest;
	char	*src;

	i = 0;
	dest = (char *) dst;
	src = (char *) srcc;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dst);
}
/*
#include <string.h>
int main(void)
{
	char str1[] = "12345";
	char str2[] = "abcdef";
	char *mem;

	mem = malloc(50);
	//printf("%s\n", memcpy(str, str2, 4));
	//printf("%s", memcpy(mem, "zy\0xw\0vu\0\0tsr", 11));
	//printf("%s", ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11));
}*/
