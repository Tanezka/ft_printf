/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:02:15 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/09 17:47:51 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	if (c == '\0')
		return ((char *) str + i);
	if (i != 0)
		i--;
	while (i >= 0)
	{
		if (str[i] == (char) c)
			return ((char *) str + i);
		i--;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "";

    printf("%s\n", ft_strrchr(str, '\0'));
    //printf("%s", str);
}*/
