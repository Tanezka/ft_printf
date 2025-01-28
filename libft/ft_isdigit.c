/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:25:59 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/05 11:47:33 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int dg)
{
	return ((dg >= '0' && dg <= '9'));
}
/*
int main(void)
{
	char num;

	num = 25;

	printf("%d \n", ft_isdigit(num));
	printf("%d", isdigit(num));
}*/
