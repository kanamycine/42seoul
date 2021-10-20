/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:10:29 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/20 16:14:24 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	rng;
	int	idx;
	int	*arr;

	if (min >= max)
		return (0);
	rng = max - min;
	arr = malloc(rng * sizeof(int));
	if (arr == NULL)
		return (0);
	idx = 0;
	while (idx < rng)
	{
		arr[idx] = min + idx;
		idx++;
	}
	return (arr);
}
