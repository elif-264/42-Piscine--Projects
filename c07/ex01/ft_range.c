/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:38:54 by enazli            #+#    #+#             */
/*   Updated: 2022/08/07 14:07:17 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*loc;

	size = max - min;
	i = 0;
	if (min >= max)
		return (0);
	loc = malloc(sizeof(int) * size);
	if (loc == NULL)
		return (0);
	while (i < size)
	{
		loc[i] = min + i;
		i++;
	}
	return (loc);
}
