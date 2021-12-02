/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:15:57 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/26 17:01:10 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = nb;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i > 0)
	{
		res *= i;
		i--;
	}
	return (res);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(5));
}*/
