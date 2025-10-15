/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:31:49 by enazli            #+#    #+#             */
/*   Updated: 2022/07/24 19:58:39 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char y)
{
	write(1, &y, 1);
}

void	ft_print_numbers(void)
{
	char	a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}
