/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:03:53 by enazli            #+#    #+#             */
/*   Updated: 2022/08/06 18:08:46 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(1,-2));
	printf("%d\n", ft_recursive_power(4,3));
	printf("%d\n", ft_recursive_power(0,2));
	return (0);
}
