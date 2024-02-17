/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 00:12:42 by sozbek            #+#    #+#             */
/*   Updated: 2024/02/14 23:56:45 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	res = (int *)malloc(sizeof(int) * (max - min));
	while (i < max - min)
	{
		res[i] = i + min;
		i++;
	}
	return (res);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
	{
		*range = 0;
		return (0);
	}
	return (max - min);
}
