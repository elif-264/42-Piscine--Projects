/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:10:59 by enazli            #+#    #+#             */
/*   Updated: 2022/08/01 15:15:50 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	char *a;
	char *b;
	char *c;

	a = "abcdef";
	b = "abSdgE";
	c = "";
	printf("%d\n%d\n%d\n", ft_str_is_lowercase(a), ft_str_is_lowercase(b), ft_str_is_lowercase(c));
	return (0);
}
