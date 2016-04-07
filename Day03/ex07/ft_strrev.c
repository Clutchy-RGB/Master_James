/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 04:44:50 by jrossouw          #+#    #+#             */
/*   Updated: 2016/04/02 05:18:43 by jrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

char	*ft_strrev(char *str)
{
	int	a;
	int	length;
	char	temp;

	a = 0;
	length = 0;
	while (str[length])
		length++;
	length--;
	while (a < length)
	{
		temp = str[length];
		str[length] = str[a];
		str[a] = temp;
		a++;
		length--;
	}
	return (str);
}

