/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:13:16 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/19 16:38:14 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char oui[20] = "\41\2";
	int i;

	ft_str_is_printable(oui);
	i = ft_str_is_printable(oui);
	printf("%d\n", i);
}*/
