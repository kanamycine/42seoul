/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb22.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 00:39:06 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/11 00:50:51 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	adding(char arr[2])
{
	if (arr[1] < '9')
		arr[1] += 1;
	else if (arr[0] < '9')
	{
		arr[1] = '0';
		arr[0] += 1;
	}
	else
		return (0);
	return (1);
}

void	ft_print_comb2(void)
{
	char	a[2];
	char	b[2];

	a[0] = '0';
	a[1] = '0' - 1;
	while (adding(a))
	{
		b[0] = a[0];
		b[1] = a[1];
		while (adding(b))
		{
			write(1, &a[0], 1);
			write(1, &a[1], 1);
			write(1, " ", 1);
			write(1, &b[0], 1);
			write(1, &b[1], 1);
			if (a[0] != '9' || a[1] != '8' || b[0] != '9' || b[0] != '9')
				write(1, ", ", 2);
			else
				return ;
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
