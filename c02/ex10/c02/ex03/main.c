/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:05:41 by enazli            #+#    #+#             */
/*   Updated: 2022/08/02 21:12:33 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char	a[] = "bilgisayar";
	char	b[] = "programcılığı";
	char	c[] = "yaz";
	char	d[] = "çizgi";

	ft_strncat(c,d,3);
	printf("%s\n", c);
	ft_strncat(a,b,7);
	printf("%s\n", a);
	return (0);
}
