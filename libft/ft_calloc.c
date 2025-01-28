/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:29:08 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/03/02 15:07:39 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nm, size_t size)
{
	void	*array;

	array = (void *)malloc(nm * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nm * size);
	return (array);
}
/*#include <stdio.h>
int	main(void)
{
	int i;

	i = 0;
	char *array;
	array = (char*) calloc(SIZE_MAX, SIZE_MAX);
	if (array != NULL)
		printf("null deel");
	while(i < 3)
	{
		array[i] = '0';
		i++;
	}
	printf("%s", array);
	free(array);

}*/
