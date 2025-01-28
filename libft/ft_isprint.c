/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:30:04 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/05 11:53:56 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int chr)
{
	if (chr >= 32 && chr <= 126)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	char chr;

	chr = 127;

	printf("%d \n", ft_isprint(chr));
	printf("%d", isprint(chr));
}*/
