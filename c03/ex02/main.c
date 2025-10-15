/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:25:39 by enazli            #+#    #+#             */
/*   Updated: 2022/08/02 18:29:27 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char	a[] = "huffle";
	char	b[] = "puff";

	ft_strcat(a,b);
	printf("%s\n", a);
	return (0);
}
