/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:00:49 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/09 18:12:26 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t a)
{
	size_t (i) = 0;
	size_t (j) = 0;
	if (*src == '\0')
		return ((char *)dest);
	while (dest[i])
	{
		while ((dest[i + j] == src[j] && dest[i + j] != '\0'
				&& src[j] != '\0' && (i + j) < a))
			j++;
		if (src[j] == '\0')
			return ((char *) dest + i);
		i++;
		j = 0;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char *dest;
	char *src = "";
	char *empty = (char *) "";
	printf("kontrol 0: %s\n", ft_strnstr(empty, src, -1));
	printf("kontrol 1: %s ", strnstr(empty, src, -1));
}*/
