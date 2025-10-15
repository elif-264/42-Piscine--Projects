/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:43:22 by enazli            #+#    #+#             */
/*   Updated: 2022/08/06 20:46:43 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int main(void)
{
	printf("%d\n", ft_sqrt(12));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	return (0);
}
