/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 12:46:31 by jrossouw          #+#    #+#             */
/*   Updated: 2016/04/05 12:49:16 by jrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_eight_queens_puzzle(int a)
{
	if (a == 92)
		return (a);
	else
		return (find_eight_queens_puzzle(a + 1);
}

int	ft_eight_queens_puzzle(void)
{
	return (find_eight_queens_puzzle(1));
}
