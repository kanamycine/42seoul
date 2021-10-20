/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftc1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:21:46 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/21 00:44:41 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base, char *nbrf);
int		length_nbr(int nbr, char *base, int length);

int	validcheck(char *str)
{
	int	i;
	int	j;

	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == 43 || str[i] == 45)
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*resnbr;
	int		midnbr;
	int		length_nbrf;

	if (validcheck(base_to) == 0 || validcheck(base_from) == 0)
		return (0);
	midnbr = ft_atoi_base(nbr, base_from);
	length_nbrf = length_nbr(midnbr, base_to, 0);
	resnbr = (char *)malloc(sizeof(char) * (length_nbrf + 1));
	if (resnbr == NULL)
		return (0);
	ft_putnbr_base(midnbr, base_to, resnbr);
	resnbr[length_nbrf] = '\0';
	return (resnbr);
}
