/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:29:09 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/24 19:46:41 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		if (power == 1)
			return (nb);
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(6, 9));
}*/
