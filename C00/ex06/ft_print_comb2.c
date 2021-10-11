/* *********************i***************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:01:16 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/10 20:40:23 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void	after_up(char a, char b, char c, char d)
{	
	while (c <= '9')
	{	
		if (b == '9')
		{
			c++;
			continue;
		}
		if (a == c)
			d = b + 1;
		else
			d = '0';
		while (d <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (a != '9' || b != '8' || c != '9' || d != '9')
				write(1, ", ", 2);
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{	
	int x;
	int y;
	int z;
	int a;
	
	a = '0';
	x = '0';
	while (x != ':')
	{
		y = '0';
		while (x <= ':' && y <= '9')
		{	
			z = x;
			after_up(x,y,z,a);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();	
	return (0);
}
