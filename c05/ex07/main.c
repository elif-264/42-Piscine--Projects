/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:33:46 by enazli            #+#    #+#             */
/*   Updated: 2022/08/06 21:37:12 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

int	ft_find_next_prime(int nb);

int main(void)
{
	printf("%d\n", ft_find_next_prime(-8));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(34));
	return (0);
}
