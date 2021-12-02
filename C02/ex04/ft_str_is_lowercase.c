/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:01:46 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/19 16:31:55 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	oui[20] = "";
	int i;

	ft_str_is_lowercase(oui);
	i=ft_str_is_lowercase(oui);
	printf("%d\n", i);
}*/
