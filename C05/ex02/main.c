/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:51:47 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/18 20:54:32 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}


#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_power(3, 4));
	printf("%i", ft_iterative_power(2, 3));
}
