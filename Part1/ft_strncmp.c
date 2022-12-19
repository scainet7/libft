/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:11:05 by snino             #+#    #+#             */
/*   Updated: 2022/10/23 12:13:40 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	size_t			i;
	unsigned char	*buf_s1;
	unsigned char	*buf_s2;

	buf_s1 = (unsigned char *)s1;
	buf_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (buf_s1[i] == buf_s2[i] && i < n - 1 && buf_s1[i] && buf_s2[i])
		i++;
	return (buf_s1[i] - buf_s2[i]);
}
