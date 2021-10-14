/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:51:08 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/10 13:34:50 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush(5, 5);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(0, 0);
	ft_putchar('\n');
	rush(-1, -1);
	ft_putchar('\n');
	rush(2, 3);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	return (0);
}
