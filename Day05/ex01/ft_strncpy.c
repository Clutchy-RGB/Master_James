/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 13:00:43 by jrossouw          #+#    #+#             */
/*   Updated: 2016/04/05 13:03:18 by jrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while(index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while(index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
