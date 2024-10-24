/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalp <yalp@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:44:44 by yalp              #+#    #+#             */
/*   Updated: 2024/02/03 12:07:26 by yalp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(unsigned char a)
{
	char	*arr;

	arr = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(arr[a / 16]);
	ft_putchar(arr[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] < 32 || str[i] > 126))
		{
			ft_putchar(str[i]);
		}
		else
		{
			hex(str[i]);
		}
		i++;
	}
}
