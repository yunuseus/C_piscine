/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalp <yalp@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:18:43 by yalp              #+#    #+#             */
/*   Updated: 2024/01/27 11:54:14 by yalp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((char)a / 10 + 48);
			ft_putchar((char)a % 10 + 48);
			ft_putchar(' ');
			ft_putchar((char)b / 10 + 48);
			ft_putchar((char)b % 10 + 48);
			if (a != 98)
			{
				ft_putchar(',' );
				ft_putchar(' ' );
			}
			b ++ ;
		}
		a ++ ;
	}
}
