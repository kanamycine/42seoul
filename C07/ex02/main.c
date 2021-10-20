/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:15:52 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/20 16:39:37 by jinychoi         ###   ########.fr       */
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
#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}
