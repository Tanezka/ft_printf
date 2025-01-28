/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:12:31 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/03/14 16:49:24 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

void	print_hexa(unsigned long long num, int *input_len, char *base);

void	print_p(unsigned long long num, int *input_len, char *base);

void	print_unsigned_decimal(long num, int *input_len);

void	print_char(char c, int *input_len);

void	print_num(int num, int *input_len);

void	print_str(char *str, int *input_len);

void	type_def(va_list input, const char *type,
			int *input_len, int *input_len2);

int		ft_printf(const char *type, ...);

#endif
