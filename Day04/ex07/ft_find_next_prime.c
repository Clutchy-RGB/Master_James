/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 12:32:37 by jrossouw          #+#    #+#             */
/*   Updated: 2016/04/05 13:19:38 by jrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_is_prime(int nb, int a)
{
	while(a < nb)
	{
		if (nb % a == 0)
		{
			return (0);
		}
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int a;

	a = 0;
	while(ft_is_prime(nb, (a + 1)) == 0)
	{
		nb++;
		a = 0;
	}
	return (nb);
}
