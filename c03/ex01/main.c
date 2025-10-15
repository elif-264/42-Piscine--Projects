/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:46:51 by enazli            #+#    #+#             */
/*   Updated: 2022/08/02 17:50:46 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
	char	a[] = "ıstanbul";
	char	b[] = "ıstanbal";
	char	c[] = "ıstanbal";

	printf("%d\n", ft_strncmp(a,b,8));
	printf("%d\n", ft_strncmp(b,a,8));
	printf("%d\n", ft_strncmp(a,b,6));
	printf("%d\n", ft_strncmp(c,b,8));
	return (0);
}
