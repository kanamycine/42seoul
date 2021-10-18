/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:07:16 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/19 01:30:13 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	validcheck(char *str)
{
	int	i;
	int	j;

	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}	
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	number;

	number = 0;
	while (base[number] != '\0')
	{
		if (str == base[number])
			return (number);
		number++;
	}
	return (-1);
}

int	negativecheck(char *str, int *i_pointer)
{
	int	nega;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	nega = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			nega *= -1;
		i++;
	}
	*i_pointer = i;
	return (nega);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	negative;
	int	number;
	int	number2;
	int	base_len;

	number = 0;
	i = 0;
	base_len = validcheck(base);
	if (base_len >= 2)
	{
		negative = negativecheck(str, &i);
		number2 = nb_base(str[i], base);
		while (number2 != -1)
		{
			number = (number * base_len) + number2;
			i++;
			number2 = nb_base(str[i], base);
		}
		return (number *= negative);
	}
	return (0);
}
