/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 01:28:15 by enazli            #+#    #+#             */
/*   Updated: 2022/07/29 01:48:57 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	while (size >= 0)
	{
		if (tab[i + 1] < tab[i])
		{
			swp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swp;
		}
		i++;
	}
	size--;
}
