/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficik <ficik@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:58:20 by ficik             #+#    #+#             */
/*   Updated: 2024/01/28 14:24:29 by ficik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	row(int x, char f, char m, char e)
{
	int	len;

	len = 1;
	while (len <= x)
	{
		if (len == 1)
			ft_putchar(f);
		else if (len == x)
			ft_putchar(e);
		else
			ft_putchar(m);
		len++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter;

	counter = 1;
	if (x > 0 && y > 0)
	{
		while (counter <= y)
		{
			if (counter == 1)
				row(x, 'A', 'B', 'C');
			else if (counter == y)
				row(x, 'C', 'B', 'A');
			else
				row(x, 'B', ' ', 'B');
			counter++;
		}
	}
	else
		write(1, "ERROR\n", 6);
}
