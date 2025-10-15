/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:42:26 by enazli            #+#    #+#             */
/*   Updated: 2022/07/31 20:58:06 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char *a;
	char *b;
	char *c;
	a = "asdf";
	b = "as2fed";
	c = "";
	printf("%d\n %d\n %d\n",ft_str_is_alpha(a), ft_str_is_alpha(b), ft_str_is_alpha(c));
	return(0);
}
