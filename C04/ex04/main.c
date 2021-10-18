/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:26:43 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/18 17:03:22 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int validcheck(char *str)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(str);
	if (str[0] == '\0' || len == 1)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}	
		i++;
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int 	len;
	int		valid;
	long	number;

	valid = validcheck(base);
	len = ft_strlen(base);
	number = nbr;
	if (valid == 1)
	{
		if (number < 0)
		{
			ft_putchar('-');
			number *= -1;
		}
		if (number < len)
			ft_putchar(base[number]);
		if (number >= len)
		{
			ft_putnbr_base(number / len, base);
			ft_putnbr_base(number % len, base);
		}
	}
}

#include <stdio.h>
int		main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
}
