/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:15:52 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/20 14:58:58 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_res(int tab[][10])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (tab[i][j] != 1)
		{
			j++;
		}
		ft_putchar(j + 48);
		i++;
	}
	ft_putchar('\n');
}

int	ft_valid(int tab[][10], int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		if (tab[i][col] == 1)
			return (0);
		i++;
	}
	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (tab[i--][j--] == 1)
			return (0);
	}
	i = row;
	j = col;
	while (i >= 0 && j < 10)
	{
		if (tab[i--][j++] == 1)
			return (0);
	}
	return (1);
}

void	ft_backtracking(int tab[][10], int row, int *i)
{
	int	col;

	col = 0;
	if (row == 10)
	{
		ft_print_res(tab);
		(*i)++;
	}
	while (col < 10)
	{
		if (ft_valid(tab, row, col))
		{
			tab[row][col] = 1;
			ft_backtracking(tab, row + 1, i);
			tab[row][col] = 0;
		}
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	tab[10][10];
	int	a;
	int	b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			tab[a][b] = 0;
			b++;
		}
		a++;
	}
	ft_backtracking(tab, 0, &i);
	return (i);
}
