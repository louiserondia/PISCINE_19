/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrondia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:04:36 by lrondia           #+#    #+#             */
/*   Updated: 2021/11/22 16:48:12 by lrondia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				n;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			return (n);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char	a[20] = "0";
	char	b[20] = "";

	strcmp(a, b);
	printf("%d\n", strcmp(a, b));
	ft_strcmp(a, b);
	printf("%d\n", ft_strcmp(a, b));
}*/
