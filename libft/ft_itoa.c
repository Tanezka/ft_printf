/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:30:14 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/06 17:33:39 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*spec(char *str)
{
	ft_strlcpy(str, "-2147483648", 16);
	return (str);
}

void	calculator(int *n, char *str, int *ctr)
{
	*n *= -1;
	str[0] = '-';
	*ctr = *ctr + 1;
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		ctr;
	int		nb;

	ctr = 0;
	i = 0;
	nb = n;
	while (nb / 10 != 0)
	{
		nb /= 10;
		ctr++;
	}
	str = malloc(((ctr + 100)) * sizeof (int));
	if (n == -2147483648)
		return (spec(str));
	if (n < 0)
		calculator (&n, str, &ctr);
	str[ctr + 1] = '\0';
	while (ctr >= 0 && str[ctr] != '-')
	{
		str[ctr--] = '0' + (n % 10);
		n = n / 10;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	int nbr;
	char *res;

	res = malloc (13 * sizeof (char));
	if (res == NULL)
		printf("malloc failed");
	nbr = -9;
	res = ft_itoa(-123);
	printf("%s", res);
	free(res);
}*/
