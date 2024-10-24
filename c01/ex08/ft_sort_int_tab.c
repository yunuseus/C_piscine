/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalp <yalp@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:01:05 by yalp              #+#    #+#             */
/*   Updated: 2024/01/30 18:03:11 by yalp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	swp;

	c = 0;
	while (c < size - 1)
	{
		if (tab[c] > tab[c + 1])
		{
			swp = tab[c];
			tab[c] = tab[c + 1];
			tab[c + 1] = swp;
			c = 0;
		}
		else
			c++;
	}
}
