/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:31:16 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/09 15:18:11 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *st, int rplacer, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *) st;
	i = 0;
	while (i < len)
	{
		str[i] = rplacer;
		i++;
	}
	return (st);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "123456789";
	char *str2;

	str2 = str;
	//printf("%s \n", str);
	size_t len;
	int rplacer;

	len = 5;
	rplacer = 50;

	//ft_memset(str, rplacer, len);
	printf("%s", memset(str2, rplacer, len ));
}*/
