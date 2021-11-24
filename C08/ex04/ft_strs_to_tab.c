/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 00:14:35 by jinychoi          #+#    #+#             */
/*   Updated: 2021/11/25 02:12:50 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"


int	ft_length(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

char	*ft_strdup(char *src)
{
	int		idx;
	char	*dest;

	idx = 0;
	dest = (char *)malloc(ft_length(src) * sizeof(char) + 1);
	if (dest == NULL)
	{
		return (0);
	}
	while (src[idx])
	{
		dest[idx] = src[idx];

		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					idx;
	struct s_stock_str	*arr;

	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	idx = 0;
	while (idx < ac)
	{
		arr[idx].size = ft_length(av[idx]);
		arr[idx].str = ft_strdup(av[idx]);
		arr[idx].copy = ft_strdup(av[idx]);
		idx++;
	}
	arr[idx].str = NULL;
	return (arr);
}
