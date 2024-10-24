/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalp <yalp@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:21:08 by yalp              #+#    #+#             */
/*   Updated: 2024/02/07 13:39:06 by yalp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *ab)
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
	if (argc > 0)
	{
		ft_print_program_name(argv[0]);
		write(1, "\n", 1);
	}
}
