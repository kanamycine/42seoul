/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:05:12 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/10 15:11:21 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_top(int x)
{
	int	x_cur;

	x_cur = 0;
	while (x_cur < x)
	{
		if (x_cur == 0)
			ft_putchar('/');
		else if (x_cur == x - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
		x_cur += 1;
	}
}

void	print_bottom(int x)
{
	int	x_cur;

	x_cur = 0;
	while (x_cur < x)
	{
		if (x_cur == 0)
			ft_putchar('\\');
		else if (x_cur == x - 1)
		{
			ft_putchar('/');
		}
		else
			ft_putchar('*');
		x_cur += 1;
	}
}

void	print_middle(int x)
{
	int	x_cur;

	x_cur = 0;
	while (x_cur < x)
	{
		if (x_cur == 0 || x_cur == x - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
		x_cur += 1;
	}
}

void	rush(int x, int y)
{
	int	y_cur;

	y_cur = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (y_cur < y)
	{
		if (y_cur == 0)
			print_top(x);
		else if (y_cur == y - 1)
			print_bottom(x);
		else
			print_middle(x);
		ft_putchar('\n');
		y_cur += 1;
	}
}
