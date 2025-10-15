/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:44:10 by enazli            #+#    #+#             */
/*   Updated: 2022/08/03 17:45:37 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char		a[] = "ı wıll happy";
	char		b[] = "ıf ı pass";

	printf("%d\n",ft_strlcat(a,b,3));
	printf("%d\n",ft_strlcat(a,b,11));
	printf("%d\n",ft_strlcat(a,b,13));
	return (0);
}
