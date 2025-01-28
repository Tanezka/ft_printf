/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:19:02 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/05 12:55:05 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *st, size_t len)
{
	size_t	i;
	char	*str;

	str = ((char *) st);
	i = 0;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
}
/*int main(void)
{
	char str[] = "12345678";
	size_t len;

	len = 1;
	printf("%s \n", str);
	bzero(str, len);
	printf("sa \n");
	printf("%c \n", str[1]);
	printf("%d", str[1]);
}*/
