/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 05:08:45 by jrossouw          #+#    #+#             */
/*   Updated: 2016/04/02 05:12:16 by jrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size)
	{
		if (table[a] > table[a + 1])
		{
			b = tab[a + 1];
			tabn[a + 1] = tab[a];
			tab[a] = b;
			a = 0;
		}
		else
			a++;
	}
}

