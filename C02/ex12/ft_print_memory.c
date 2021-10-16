/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:40:41 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/16 21:16:40 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_first(long long addr)
{
	char	arr[16];
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = -1;
	while (i++ < 16)
		arr[i] = '0';
	i = 0;
	while (addr >= 16)
	{
		arr[i] = hex[addr % 16];
		addr /= 16;
		i++;
	}
	arr[i] = hex[addr];
	i = 15;
	while (i >= 0)
	{
		write(1, &arr[i], 1);
		i--;
	}
	write(1, ":", 1);
}

void	ft_print_array(char *array)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (i % 4 == 0)
			write(1, " ", 1);
		write(1, &array[i], 1);
		i++;
	}
}

void	ft_print_second(char *addr, unsigned int size, unsigned int j)
{
	int				i;
	char			*hex;
	char			letters[32];
	unsigned char	c;

	i = -1;
	while (i++ < 32)
		letters[i] = ' ';
	i = 0;
	hex = "0123456789abcdef";
	while (i < 16 && j < size)
	{
		c = (unsigned char)*addr;
		letters[2 * i] = hex[c / 16];
		letters[2 * i + 1] = hex[c % 16];
		addr++;
		j++;
		i++;
	}
	ft_print_array(letters);
	write(1, " ", 1);
}

void	ft_print_third(char *addr, unsigned int size, unsigned int j)
{
	unsigned char	c;
	int				i;

	i = 0;
	while (i < 16 && j < size)
	{
		c = (unsigned char)*addr;
		if (!(c >= 32 && c <= 126))
			write(1, ".", 1);
		else
			write(1, &c, 1);
		j++;
		i++;
		addr++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < size)
	{
		ft_print_first((long long)addr);
		ft_print_second(addr, size, i);
		ft_print_third(addr, size, i);
		j = 0;
		while (j < 16)
		{
			addr++;
			j++;
		}
		i += 16;
	}
	return (addr);
}
