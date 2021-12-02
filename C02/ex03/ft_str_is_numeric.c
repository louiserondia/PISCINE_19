/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:45:39 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/19 16:30:10 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	oui[20] = "";
	int	i;

	ft_str_is_numeric(oui);
	i = ft_str_is_numeric(oui);
	printf("%d\n", i);
}*/
