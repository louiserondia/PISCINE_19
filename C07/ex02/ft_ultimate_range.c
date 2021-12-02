/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:15:14 by lrondia           #+#    #+#             */
/*   Updated: 2021/12/02 20:19:26 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (-1);
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

/*#include <stdio.h>

int	main()
{
	int i;
	int n;
	int min = -6;
	int max = -3;
	int *tab = NULL;

	i = 0;
	n = ft_ultimate_range(&tab, min, max);
	while (i < max - min)
	{
		printf("Element %d : %d et i = %d\n", i, tab[i], n);
		i++;
	}
	return (0);	
}*/
