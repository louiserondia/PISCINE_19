/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:07:34 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/19 16:33:46 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	oui[20] = "HElLO";
	int i;

	ft_str_is_uppercase(oui);
	i = ft_str_is_uppercase(oui);
	printf("%d\n", i);
}*/
