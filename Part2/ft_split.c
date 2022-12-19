/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:30:42 by snino             #+#    #+#             */
/*   Updated: 2022/10/23 12:13:40 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_free_res(char ***res, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free((*res)[i]);
		i++;
	}
	free(*res);
	*res = NULL;
}

static int	ft_split_words(char const *s, char c)
{
	int		i;
	int		n;
	int		m;

	i = 0;
	n = 0;
	m = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && (m == 1))
			m = 0;
		if ((m == 0) && (s[i] != c))
		{
			m = 1;
			n++;
		}
		i++;
	}
	return (n);
}

static void	ft_split_len(char ***res, char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s != '\0')
	{
		len = 0;
		while (*s == c)
			s++;
		while (s[len] != c && s [len] != '\0')
			len++;
		if (len == 0)
			break ;
		(*res)[i] = ft_substr(s, 0, len);
		if ((*res)[i] == NULL)
		{
			ft_free_res(res, i);
			break ;
		}
		i++;
		s += len;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**res;

	res = NULL;
	if (s != NULL)
	{
		words = ft_split_words((char const *)s, c);
		res = (char **)malloc(sizeof(char *) * (words + 1));
		if (res != NULL)
		{
			res[words] = NULL;
			ft_split_len(&res, s, c);
		}
	}
	return (res);
}
