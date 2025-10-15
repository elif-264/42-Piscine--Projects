/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:34:17 by enazli            #+#    #+#             */
/*   Updated: 2022/08/01 16:39:41 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char *a;
	char *b;
	char *c;

	a = "\t (tab), \a (?)";
	b = "asdjhsvlhsbx23689";
	c = "";
	printf("%d\n%d\n%d\n", ft_str_is_printable(a), ft_str_is_printable(b), ft_str_is_printable(c));
	return (0);
}
