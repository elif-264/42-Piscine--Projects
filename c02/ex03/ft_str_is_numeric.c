 >/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enazli <enazli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 21:01:18 by enazli            #+#    #+#             */
/*   Updated: 2022/07/31 21:13:52 by enazli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		r = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
		r = 0;
		}
		else
		{
			r = 1;
			break ;
		}	
		i++;
	}
	return (r);
}
