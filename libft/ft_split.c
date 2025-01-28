/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:41:20 by tkaraaga          #+#    #+#             */
/*   Updated: 2023/03/02 17:00:16 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	p_counter(char const *s, char c)
{
	int	dmaker;
	int	i;
	int	counter;

	i = -1;
	dmaker = 0;
	counter = 0;
	while (s[++i])
	{
		if (s[i] != c)
			dmaker = 1;
		if ((s[i] == c || s[i + 1] == '\0') && dmaker == 1)
		{
			counter++;
			dmaker = 0;
		}
	}
	return (counter);
}

void	fill_array(char **array, char const *s, char c)
{
	size_t (i) = 0;
	size_t (k) = 0;
	size_t (m) = 0;
	while (s[i] != '\0')
	{
		if ((s[i - 1] == c || i == 0) && s[i] != c)
		{
			free (array[k]);
			array[k] = ft_calloc(m + 500, sizeof (char *));
			m = 0;
			while (s[i] != c && s[i])
			{
				array[k][m++] = s[i++];
				if (s[i] == c || s[i] == '\0')
				{
					array[k++][m] = '\0';
					i--;
					break ;
				}
			}
		}
	i++;
	}
	array[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	i = 0;
	array = ft_calloc((p_counter(s, c) + 10000), sizeof (char *));
	fill_array(array, s, c);
	return (array);
}

/*#include <stdio.h>
int main (void)
{
	char *s = "      split       this for   me  !       ";

	char	**result = ft_split(s, ' ');

	if (!result)
		printf("kötü");
	else
		printf("ii");
}*/
/*
#include <stdio.h>
int	main(void)
{
	int i;
	int len;
	char str[] = "a1 b2 c3";
	char **array;

	i = 0;
	len = 0;
	//printf("%s", array[1]);
	while (array[i])
	{
		len = 0;
		while (array[i][len])
			len++;
		write(1, array[i], len);
		write(1, "\n", 1);
		i++;
	}
	}*/
