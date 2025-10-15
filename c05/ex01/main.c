/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:10:28 by enazli            #+#    #+#             */
/*   Updated: 2022/08/06 16:23:59 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%d, %d\n", ft_recursive_factorial(0), ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(-4));
	printf("%d, %d\n", ft_recursive_factorial(3), ft_recursive_factorial(5));
}
