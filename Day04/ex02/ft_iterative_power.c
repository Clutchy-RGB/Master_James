/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 13:16:46 by jrossouw          #+#    #+#             */
/*   Updated: 2016/04/05 12:29:39 by jrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int	a;
	int result;

	a = 1;
	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (a < power)
	{
		nb = nb * result;
		a++;
	}
	return (nb);
}

