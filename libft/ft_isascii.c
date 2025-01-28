/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:11:03 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/05 11:45:13 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int chr)
{
	return (chr >= 0 && chr <= 127);
}
/*
int main(void)
{
	char chr;
	
	chr = ' ';
	printf("%d \n", ft_isascii(chr));
	printf("%d", isascii(chr));
}*/
