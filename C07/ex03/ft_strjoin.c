/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:29:45 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/20 22:40:27 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_assign_size(int size, char **strs, char *sep)
{
	int	strs_sum_size;
	int	sep_size;
	int	res;
	int	i;

	i = -1;
	strs_sum_size = 0;
	sep_size = 0;
	sep_size = ft_length(sep);
	while (++i < size)
		strs_sum_size += ft_length(strs[i]);
	res = sep_size * (size - 1) + strs_sum_size + 1;
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	i = 0;
	if (size == 0)
		res = (char *)malloc(sizeof(char));
	else
	{
		res = (char *)malloc(ft_assign_size(size, strs, sep));
		j = 0;
		while (j < size)
		{
			k = 0;
			while (strs[j][k])
				res[i++] = strs[j][k++];
			k = 0;
			while (j < size - 1 && sep[k])
				res[i++] = sep[k++];
			j++;
		}
	}
	res[i] = '\0';
	return (res);
}
