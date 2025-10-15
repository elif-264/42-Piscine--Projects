/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:08:03 by enazli            #+#    #+#             */
/*   Updated: 2022/07/31 20:41:40 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			r = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			r = 1;
		}		
		else
		{
			r = 0;
			break ;
		}
		i++;
	}
	return (r);
}
