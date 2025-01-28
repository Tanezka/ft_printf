/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:31:07 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/05 12:56:41 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*backwards(char *dest, char *src, size_t len)
{
	int	i;

	i = len - 1;
	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}

int	funker(size_t *i, char *src, size_t len, char *dest)
{
	while (*i < len)
	{
		if (&src[*i] == &dest[0])
		{
			return (1);
			break ;
		}
		*i += 1;
	}
	return (0);
}

void	*ft_memmove(void *dst, const void *srcc, size_t len)
{
	size_t	i;
	int		dmaker;
	char	*dest;
	char	*src;

	i = 0;
	dest = (char *) dst;
	src = (char *) srcc;
	dmaker = 0;
	dmaker = funker (&i, src, len, dest);
	if (dmaker == 0)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
	else
		return (backwards(dest, src, len));
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "0123456789";
    char str2[] = "0123456789";
    char *x;

	printf("%s\n", str+2);
	printf("ft_memmove: %s\n", ft_memmove(str + 4, str + 0, 5));
	printf("memmove:    %s\n", memmove(str2 + 4, str2 + 0, 5));
}*/
