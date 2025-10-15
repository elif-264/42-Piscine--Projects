/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:53:29 by enazli            #+#    #+#             */
/*   Updated: 2022/08/02 15:32:15 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *a = "asdf";
	char *b = "asdh";
	char *c = "asdf";

	printf("%d\n", ft_strcmp(a,b));
	printf("%d\n", ft_strcmp(b,a));
	printf("%d\n", ft_strcmp(a,c));
	return (0);
}
