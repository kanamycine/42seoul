/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 00:52:38 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/11 16:32:23 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_int_length(int nb)
{
	int	count;

	count = 1;
	if (nb < 0)
	{
		nb = nb * -1;
	}
	while (nb > 10)
	{
		nb = nb / 10;
		count += 1;
	}
	return (count);
}

void	put_write(int nb, int nb_len, int idx, int flg, char arrnb[])
{
	while (nb > 0)
	{
		arrnb[idx] = nb % 10 + '0';
		nb = nb / 10;
		idx--;
	}
	idx = 0;
	if (!flg)
		write(1, "-", 1);
	while (idx < nb_len)
	{
		write(1, &arrnb[idx], 1);
		idx++;
	}
}

void	ft_putnbr(int nb)
{
	int		idx;
	int		nb_len;	
	int		flg;
	char	arrnb[nb_len];

	nb_len = ft_int_length(nb);

	flg = 1;
	if (nb < 0)
	{
		flg = 0;
		nb *= -1;
	}
	idx = nb_len - 1;
	put_write(nb, nb_len, idx, flg, arrnb);	
}

int	main(void)
{
	ft_putnbr(123);
	ft_putnbr(-123);
	return 0;
}
