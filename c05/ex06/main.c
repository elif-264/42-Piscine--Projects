/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:54:30 by enazli            #+#    #+#             */
/*   Updated: 2022/08/06 20:57:35 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(12));
	return (0);
}
