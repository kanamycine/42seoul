/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:39:46 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/16 18:39:53 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printf_hex(unsigned char i)
{
	char *hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[i / 16]);
	ft_putchar(hex[i % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char i;

	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			i = (unsigned char)*str;
			ft_putchar('\\');
			ft_printf_hex(i);
		}
		str++;
	}
}
