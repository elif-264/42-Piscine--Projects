/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:57:02 by enazli            #+#    #+#             */
/*   Updated: 2022/08/04 11:34:28 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-425);
	return(0);
}
