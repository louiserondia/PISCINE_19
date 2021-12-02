/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:40:36 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/24 19:47:16 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (res);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(0, -2));
}*/
