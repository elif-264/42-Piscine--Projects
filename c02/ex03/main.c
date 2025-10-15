/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 21:14:58 by enazli            #+#    #+#             */
/*   Updated: 2022/07/31 21:20:43 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *a;
	char *b;
	char *c;

	a = "asdf";
	b = "asdf2gcv";
	c = "";
	printf("%d\n%d\n%d\n", ft_str_is_numeric(a), ft_str_is_numeric(b), ft_str_is_numeric(c));
	return (0);
}
