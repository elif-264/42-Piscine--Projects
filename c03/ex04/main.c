/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:41:48 by enazli            #+#    #+#             */
/*   Updated: 2022/08/03 12:48:18 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char	a[] = "mutluluk";
	char	b[] = "utlu";

	printf("%s\n", ft_strstr(a,b));
	return (0);
}
