/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:15:07 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/22 18:04:31 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65)
				|| (str[i - 1] > 90 && str[i - 1] < 97)
				|| str[i - 1] > 122))
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			&& ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			str[i] += 32;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char oui[] = "salut, COmment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *c;

	c = ft_strcapitalize(oui);
	printf("%s\n", c);
}*/
