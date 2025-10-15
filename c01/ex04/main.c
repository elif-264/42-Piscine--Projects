  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:42:06 by enazli            #+#    #+#             */
/*   Updated: 2022/07/28 10:48:13 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a;
	int b;
	int *x;
	int *y;

	a = 20;
	b = 5;
	x = &a;
	y = &b;
	ft_ultimate_div_mod(x,y);
	printf("%d, %d\n", a,b);
}
