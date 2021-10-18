/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:55:50 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/18 21:00:58 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (result);
}
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_power(5, 1));
	printf("%i", ft_recursive_power(5, 3));
	printf("%i", ft_recursive_power(2, 3));
}
