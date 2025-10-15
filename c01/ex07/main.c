/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:53:37 by enazli            #+#    #+#             */
/*   Updated: 2022/07/28 12:45:04 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int	i;
	int	a[] = {1,2,3,4,5};

	ft_rev_int_tab(a,5);
	i = 0;
	while(i <= 4)
	{
		printf("%d", a[i]);
		if (i !=4)
			printf(", ");
		i++;
	}
	printf("\n");
	return(0);
}
