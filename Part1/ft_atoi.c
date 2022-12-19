/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:49:10 by snino             #+#    #+#             */
/*   Updated: 2022/10/23 12:13:40 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	i = 0;
	while (str && str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		++i;
	if (str && (str[i] == '+' || str[i] == '-'))
		if (str[i++] == '-')
			sign = -1;
	while (str && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + ((str[i] - 48) * sign);
		i++;
		if (sign == 1 && result < 0)
			return (-1);
		if (sign == -1 && result > 0)
			return (0);
	}
	return ((int)result);
}
