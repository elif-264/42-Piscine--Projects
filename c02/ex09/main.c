/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:47:09 by enazli            #+#    #+#             */
/*   Updated: 2022/08/02 01:28:59 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char abc[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s\n", ft_strcapitalize(abc));
}
