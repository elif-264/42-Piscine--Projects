/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:53:51 by enazli            #+#    #+#             */
/*   Updated: 2022/08/06 18:56:34 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int main(void)
{
	printf("%d\n", ft_fibonacci(-6));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(5));
	return (0);
}
