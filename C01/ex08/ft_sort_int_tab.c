/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:41:32 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/13 17:23:00 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int j;
	int	tmp;

	i = size - 1;
	tmp = 0;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (tab[j] > tab[j+1])
			{
				tmp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = tmp;
			}
			j++;
		}
		for(int h = 0 ; h < 5; h++){
		printf("%d", tab[h]);
		}
		printf("\n");
		i--;
	}
}

int	main(void)
{
	int z = 0;
	int k = 5;
	int arr [5] = {5,2,3,1,4};
	ft_sort_int_tab(arr,k);
	while(z < 5)
	{	
		printf("%d", arr[z]);
		z++;
	}
}
