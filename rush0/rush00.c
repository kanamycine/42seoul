/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:54:51 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/10 13:36:26 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, int edge)
{
	int	x_cur;

	x_cur = 0;
	while (x_cur < x)
	{
		if (edge)
		{
			if (x_cur == 0 || x_cur == x - 1)
				ft_putchar('o');
			else
				ft_putchar('-');
		}
		else
		{
			if (x_cur == 0 || x_cur == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		x_cur += 1;	
	}
}

void	rush(int x, int y)
{	
	int	y_cur;

	y_cur = 0;
	if (x < 1 || y < 1)
		return ;
	while (y_cur < y)
	{
		if (y_cur == 0 || y_cur == y - 1)
			print_line(x, 1);
		else
			print_line(x, 0);
		ft_putchar('\n');
		y_cur += 1;
	}
}	
