/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_s_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:44:22 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/03/14 16:57:42 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

void	print_char(char c, int *input_len)
{
	write(1, &c, 1);
	*input_len = 1;
}

void	neg_handler(int *num, int *nb, int *input_len)
{
	if (*num == -2147483648)
	{
		write(1, "-2147483648", 11);
		*input_len = 11;
		return ;
	}
	write(1, "-", 1);
	*num *= -1;
	*nb = 1;
}

void	print_num(int num, int *input_len)
{
	int		len;
	char	*str;
	char	*dummy;
	int		nb;

	nb = 0;
	*input_len = 0;
	if (num < 0)
		neg_handler(&num, &nb, input_len);
	dummy = ft_itoa(num);
	len = ft_strlen(dummy);
	free (dummy);
	str = ft_itoa(num);
	while (len-- != 0 && ft_isdigit(str[*input_len]) == 1)
	{
		write(1, &str[*input_len], 1);
		(*input_len)++;
	}
	*input_len += nb;
	free (str);
}

void	print_str(char *str, int *input_len)
{
	int	len;

	if (!str)
	{
		write(1, "(null)", 6);
		*input_len = 6;
		return ;
	}
	len = (int)ft_strlen(str);
	*input_len = 0;
	while (str[*input_len])
	{
		write(1, &str[*input_len], 1);
		(*input_len)++;
	}
}
