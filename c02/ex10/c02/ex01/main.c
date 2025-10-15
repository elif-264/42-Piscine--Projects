/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:24:27 by enazli            #+#    #+#             */
/*   Updated: 2022/07/31 18:28:17 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char	abc[] = "Istanbul";
	char	xyz[] = "llllllllsssss";
	ft_strncpy(xyz, abc, 12);
	printf("%s\n", xyz);
}

