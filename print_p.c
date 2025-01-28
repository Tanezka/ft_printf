/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 06:42:07 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/03/14 17:07:24 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

void	checker(unsigned long long *num, unsigned long long *baser,
			unsigned long long *baselen, unsigned long long *digit)
{
	if (*num < 1152921504606846976)
	{
		while ((*num / (*baser)) > 0)
		{
			(*digit)++;
			*baser *= *baselen;
		}
		*baser /= *baselen;
	}
	else
	{
		*baser = 1152921504606846976;
		*digit = 16;
	}
}

void	print_p(unsigned long long num, int *input_len, char *base)
{
	char				*new;
	unsigned long long	digit;
	unsigned long long	baser;
	unsigned long long	baselen;

	*input_len = 0;
	digit = 1;
	baser = (unsigned long long)ft_strlen(base);
	baselen = baser;
	checker (&num, &baser, &baselen, &digit);
	new = ft_calloc(digit + 1, sizeof(char));
	while ((*input_len < (int)digit) && baser != 0)
	{
		new[(*input_len)++] = base[num / baser];
		num -= baser * (num / baser);
		baser = baser / baselen;
	}
	new[digit] = '\0';
	print_str(new, input_len);
	free(new);
}
