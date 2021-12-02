/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:43:49 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/26 17:24:47 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	if (nb > 10000)
		i = (nb / 100) - 1;
	else
		i = nb - 1;
	while (i > 0)
	{
		if (i * i == nb)
			return (i);
		i--;
	}
	return (0);
}

/*#include <stdio.h>
int	main()
{
	printf("%d", ft_sqrt(1));
}*/
