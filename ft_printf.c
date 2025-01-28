/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:04:49 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/03/14 16:59:16 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	type_def(va_list input, const char *type,
		int *input_len, int *input_len2)
{
	*input_len = 0;
	if (ft_strncmp(type, "%c", 2) == 0)
		print_char(va_arg(input, int), input_len);
	else if (ft_strncmp(type, "%s", 2) == 0)
		print_str(va_arg(input, char *), input_len);
	else if ((ft_strncmp(type, "%d", 2) == 0)
		|| (ft_strncmp(type, "%i", 2) == 0))
	{
		print_num(va_arg(input, int), input_len);
	}
	else if (ft_strncmp(type, "%%", 2) == 0 && write(1, "%", 1) == 1)
		(*input_len)++;
	else if (ft_strncmp(type, "%p", 2) == 0)
	{
		write(1, "0x", 2);
		print_p(va_arg(input, long long), input_len, "0123456789abcdef");
		*input_len += 2;
	}
	else if (ft_strncmp(type, "%u", 2) == 0)
		print_unsigned_decimal(va_arg(input, long ), input_len);
	else if (ft_strncmp(type, "%X", 2) == 0)
		print_p(va_arg(input, unsigned int), input_len, "0123456789ABCDEF");
	else if (ft_strncmp(type, "%x", 2) == 0)
		print_p(va_arg(input, unsigned int), input_len, "0123456789abcdef");
	*input_len2 += *input_len;
}

int	ft_printf(const char *type, ...)
{
	int		input_len;
	int		input_len2;
	va_list	input;

	input_len = 0;
	input_len2 = 0;
	va_start(input, type);
	while (*type)
	{
		if (*type == '%' && (*(type + 1) == '%' || *(type + 1) == 'p'
				||*(type + 1) == 'u' || *(type + 1) == 'X'
				|| *(type + 1) == 'x' || *(type + 1) == 's'
				|| *(type + 1) == 'c' || *(type + 1) == 'd'
				|| *(type + 1) == 'i'))
			type_def(input, type++, &input_len, &input_len2);
		else
		{
			write (1, type, 1);
			input_len2++;
		}
		type++;
	}
	va_end (input);
	return (input_len2);
}

/*int	main(void)
{
	int	num1 = -1;
	int	num2 = 2543;
	int num3 = 234;
	int num4 = 2442;
	int numara;
	int numara2;
	char str[] = "selam";
	void	*ptr;
	char c = 'c';

	ptr = &num1;

	//len = ft_printf("%%");
	//numara = ft_printf("%s %c %d %x %X %u %p %%",
	//str, c, num1, num2, num3, num4, ptr);
	//numara2 = printf("\n%s %c %d %x %X %u %p %%",
	//str, c, num1, num2, num3, num4, ptr);
	ft_printf(" %d ", -1);
	//numara2 = printf(" NULL %s NULL ", NULL);
	printf("\n %d ", -1);
}*/
