/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:37:43 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/18 22:21:36 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	idx;
	long long	number;

	number = nb;
	if (number <= 0)
		return (0);
	if (number == 1)
		return (1);
	idx = 2;
	if (number >= 2)
	{
		while (idx * idx <= number)
		{
			if (idx * idx == number)
			{
				return (idx);
			}
			idx++;
		}
	}
	return (0);
}
