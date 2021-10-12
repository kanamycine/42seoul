/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:22:33 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/12 13:47:04 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n, int arr[])
{
	char	m;
	int		i;

	i = 0;
	while (i < n)
	{
		m = '0' + arr[i];
		write(1, &m, 1);
		i++;
	}	
}

void	ft_recursive(int depth, int card_arr[], int n, int before)
{
	int	lim;
	int	i;

	if (depth == n)
	{
		ft_print(n, card_arr);
		if (card_arr[0] != 9 - n + 1)
			write(1, ", ", 2);
		return ;
	}
	lim = 9 - n + depth + 1;
	i = ++before;
	while (i <= lim)
	{
		card_arr[depth] = i;
		ft_recursive(depth + 1, card_arr, n, i);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	card_arr[9];

	i = 0;
	while (i < 9)
	{
		card_arr[i] = 0;
		i++;
	}
	ft_recursive(0, card_arr, n, -1);
}
