/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:37:50 by enazli            #+#    #+#             */
/*   Updated: 2022/07/27 20:47:50 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int x;
	int y;
	int *a_;
	int *b_;

	a_ = &x;
	b_ = &y;
	ft_div_mod(35,3,a_,b_);
	printf("%d, %d\n",x,y);
	return(0);
}
