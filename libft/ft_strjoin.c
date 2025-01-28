/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:55:48 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/06 13:11:23 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*stsum;
	int		i;
	int		lens1;

	i = 0;
	lens1 = ft_strlen(s1);
	stsum = malloc(lens1 + ft_strlen(s2) + 1);
	while (s1[i])
	{
		stsum[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		stsum[lens1 + i] = s2[i];
		i++;
	}
	stsum[lens1 + i] = '\0';
	return (stsum);
}
/*
int	main(void)
{
	char s1[] = "selam";
	char s2[] = "12345";
	
	printf("%s", ft_strjoin(s1, s2));
}*/
