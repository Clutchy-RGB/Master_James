/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 13:20:56 by jrossouw          #+#    #+#             */
/*   Updated: 2016/04/01 13:58:57 by jrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	numbers[4];

	while (!((numbers[0] == 9) && (numbers[1] == 9)))
	{
		ft_putchar(numbers[0] + 48);
		ft_putchar(numbers[1] + 48);
		ft_putchar(' ');
		ft_putchar(numbers[2] + 48);
		ft_putchar(numbers[3] + 48);
		if (!((numbers[0] == 9) && (numbers[1] == 8)))
			ft_putchar(',');
		if (!((numbers[0] == 9) && (numbers[1] == 8)))
			ft_putchar(' ');
		numbers[3]++;
		if ((numbers[3] = numbers[3] %10) ==0)
			numbers[2] = (numbers[2] + 1);
		if (numbers[2] == 10)
		{
			numbers[2] = numbers[0];
			numbers[1]++;
			if ((numbers[1] = numbers[1] % 10) == 0)
				numbers[0]++;
			numbers[3] = numbers[1] + 1;
		}
	}
}

