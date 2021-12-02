/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:17:48 by lrondia           #+#    #+#             */
/*   Updated: 2021/12/02 19:57:12 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		tab = NULL;
		return (tab);
	}
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	else
	{
		while (min < max)
		{
			tab[i] = min;
			min ++;
			i++;
		}
	}
	tab[i] = '\0';
	return (tab);
}

/*#include <stdio.h>
int	main()
{
	int i;
	int min = -2147483648;
	int max = -2147483645;
	int *tab;
	
	i = 0;
	tab = ft_range(min, max);
	while (i < max - min)
	{
		printf("Element %d : %d\n", i, tab[i]);
		i++;
	}
	return (0);
}*/
