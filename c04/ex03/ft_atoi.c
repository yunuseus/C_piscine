/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalp <yalp@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:13:31 by yalp              #+#    #+#             */
/*   Updated: 2024/02/05 13:37:23 by yalp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 1;
	b = 0;
	c = 0;
	while (str[c] == ' ' || str[c] == '\f' || str[c] == '\n'
		|| str[c] == '\r' || str[c] == '\t' || str[c] == '\v')
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			a *= -1;
		c++;
	}
	while (str[c] <= '9' && str[c] >= '0')
	{
		b = b * 10 + (str[c] - 48);
		c++;
	}
	return (b * a);
}
