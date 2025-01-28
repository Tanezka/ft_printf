/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:14:14 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/01/05 12:09:08 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c + ('A' - 'a'));
	else
		return (c);
}
/*
int main(void)
{
	char str[] = "selam";

	printf("%c", ft_toupper('z'));
}*/
