/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalp <yalp@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:36:58 by yalp              #+#    #+#             */
/*   Updated: 2024/02/05 18:27:36 by yalp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (a < power)
	{
		b *= nb;
		a++;
	}
	return (b);
}
