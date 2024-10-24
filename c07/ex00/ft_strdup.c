/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalp <yalp@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:44:37 by yalp              #+#    #+#             */
/*   Updated: 2024/02/10 11:09:36 by yalp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		j;
	char	*a;
	int		i;

	i = ft_strlen(src);
	j = 0;
	a = (char *)malloc(i + 1);
	if (!a)
		return (0);
	while (src[j])
	{
		a[j] = src[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}
