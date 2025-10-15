/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:34:41 by enazli            #+#    #+#             */
/*   Updated: 2022/08/06 17:43:24 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(1,-2));
	printf("%d\n", ft_iterative_power(4,3));
	printf("%d\n", ft_iterative_power(0,2));
	return (0);
}
