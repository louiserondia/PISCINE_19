/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:37:15 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/20 19:51:40 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*d;

	i = 0;
	d = dest;
	while (i < n)
	{
		if (!*src)
			*dest = '\0';
		else
		{
			*dest = *src;
			src ++;
		}
		i++;
		dest ++;
	}
	return (d);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int	a = 5;
	char	b [7] = "Bonjour";
	char	c [11] = "123prout";
	
//	strncpy(b, c, a);
	ft_strncpy(b, c, a);
	printf("%s ", b);
}*/
