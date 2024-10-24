/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalp <yalp@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:56:01 by yalp              #+#    #+#             */
/*   Updated: 2024/02/07 15:58:06 by yalp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *ab)
{
	int	i;

	i = 0;
	while (ab[i] != '\0')
	{
		write (1, &ab[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (0 < i)
	{
		ft_print_params(argv[i]);
		write(1, "\n", 1);
		i --;
	}
}
