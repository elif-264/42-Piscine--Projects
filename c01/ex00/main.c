/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:42:19 by enazli            #+#    #+#             */
/*   Updated: 2022/07/27 18:49:32 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*e_nbr;
	int	nbr;

	nbr = 29;
	printf(" %d\n" ,nbr);
	e_nbr = &nbr;
	ft_ft(e_nbr); 
	printf(" %d\n" ,nbr);
	return(0);

}
