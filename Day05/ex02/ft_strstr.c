/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 13:00:58 by jrossouw          #+#    #+#             */
/*   Updated: 2016/04/06 14:08:41 by jrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (to_find[b] == str [a + b])
		{
			if (to_find[a + 1] == '\0')
			{
				return (str + a);
			}
			b++;
		}
		a++;
	}
	return (0);
}
