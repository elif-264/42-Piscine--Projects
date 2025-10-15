/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:13:51 by enazli            #+#    #+#             */
/*   Updated: 2022/07/27 20:31:53 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int nbr;
	int *nbr_;
	int c;
	int	*c_;

	nbr = 1;
	c = 2;
	nbr_ = &nbr;
	c_ = &c;
	printf("%d, %d\n",*nbr_,*c_);
	ft_swap(nbr_, c_);
	printf("%d, %d\n",*nbr_,*c_);
	return(0);
}
