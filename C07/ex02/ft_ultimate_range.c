/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:15:52 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/20 16:38:52 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	rng;
	int	idx;
	int	*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	rng = max - min;
	arr = malloc(rng * sizeof(int));
	if (arr == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	idx = 0;
	while (idx < rng)
	{
		arr[idx] = min + idx;
		idx++;
	}
	return (rng);
}
