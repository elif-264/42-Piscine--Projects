/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:25:53 by enazli            #+#    #+#             */
/*   Updated: 2022/08/01 15:30:14 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main (void)
{
	char *a;
	char *b;
	char *c;

	a = "ASDFEG";
	b = "ASDecfg2";
	c = "";
	printf("%d\n%d\n%d\n", ft_str_is_uppercase(a), ft_str_is_uppercase(b), ft_str_is_uppercase(c));
	return (0);
}
