/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:18:47 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/06 12:47:04 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	ret;

	sign = 1;
	ret = 0;
	while (*str == ' ' || *str == '\f' || *str == '\v'
		|| *str == '\t' || *str == '\n' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		ret = (ret * 10) + *str - '0';
		str++;
	}
	return (ret * sign);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	//char str[] = "1";

	printf("original: %d \n", atoi("\n\n\n  -46\b9 \n5d6"));
	printf("fake: %d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
	//printf("%d", (-1 % 2));
}*/
