/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:47:00 by enazli            #+#    #+#             */
/*   Updated: 2022/08/06 15:55:59 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
	printf("%d, %d\n",ft_iterative_factorial(0), ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(-4));
	printf("%d, %d\n", ft_iterative_factorial(4), ft_iterative_factorial(12));
	return (0);
}
