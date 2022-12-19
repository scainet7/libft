/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:13:50 by snino             #+#    #+#             */
/*   Updated: 2022/10/23 12:13:40 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_nbrlen(long long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_res_nbr(long n, char *res, int *i)
{
	if (n > 9)
	{
		ft_res_nbr(n / 10, res, i);
		ft_res_nbr(n % 10, res, i);
	}
	else
		res[(*i)++] = n + '0';
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		i;
	char	*res;

	nbr = n;
	res = malloc(sizeof(char) * (ft_nbrlen(nbr) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		res[i++] = '-';
		nbr *= -1;
	}
	ft_res_nbr(nbr, res, &i);
	res[i] = '\0';
	return (res);
}
