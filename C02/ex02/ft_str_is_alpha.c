/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:22:08 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/22 18:05:21 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{	
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	oui[20] = "";
	int i;

	ft_str_is_alpha(oui);
	i = ft_str_is_alpha(oui);
	printf("%d\n", i);
}*/
