/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 13:22:54 by jrossouw          #+#    #+#             */
/*   Updated: 2016/04/06 13:01:19 by jrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int a;
	int upper;

	a = 0;
	upper = 1;
	while (str[a] != '\0')
	{
		if ((str[a] >= '0' && str[a] <= '9') || (str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z'))
		{
			if (upper && (str[a] >= 'a' && str[a] <= 'z'))
				str[a] = str[a] - 32;
			else if (!upper && (str[a] >= 'A' && str[a] <= 'Z'))
				str[a] = str[a] + 32;
			upper = 0;
		}
		else
			upper = 1;
		a++;
	}
	return (str);
}
