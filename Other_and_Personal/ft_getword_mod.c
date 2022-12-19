/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getword_mod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <snino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:05:33 by snino             #+#    #+#             */
/*   Updated: 2022/10/29 14:43:54 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_getword_mod(const char *s, char delim)
{
	char	*buff;
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (s[++i] != delim)
		;
	buff = (char *)malloc(i + 1);
	i = -1;
	while (s[++j] != delim)
		buff[++i] = s[j];
	buff[++i] = '\0';
	return (buff);
}
