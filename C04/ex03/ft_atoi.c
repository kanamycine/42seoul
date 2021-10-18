/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 23:54:24 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/19 01:24:37 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	cnt;
	int	res;

	i = 0;
	while ((*(str + i) >= 9 && *(str + i) <= 13) || *(str + i) == 32)
		i++;
	cnt = 0;
	while (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			cnt++;
		i++;
	}
	res = 0;
	while (*(str + i) >= 48 && *(str + i) <= 57 )
	{
		res *= 10;
		res = res + (*(str + i++)) - 48;
	}
	if (cnt % 2 != 0)
		res = (res * -1);
	return (res);
}
