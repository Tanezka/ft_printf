/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:08:44 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/06 14:22:48 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	lenset;

	i = 0;
	len = ft_strlen(s);
	lenset = ft_strlen(set);
	while (ft_memchr(set, s[i], lenset) && s[i])
		i++;
	while (ft_memchr(set, s[len - 1], lenset) && i < len)
		len--;
	return (ft_substr(s, i, len - i));
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "          ";
	char set[] = " ";

	printf("%s", ft_strtrim(str, set));
}*/
