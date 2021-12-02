/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:30:07 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/20 19:38:56 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{	
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		i = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>

int main()
{
	char	oui[6] = "Prout";
	char	non[8] = "Bonjour";
	int i;

	i = ft_strlcpy(oui, non, 5);
	printf("%d\n", i);
	printf("%s\n%s\n", oui, non);
}*/
