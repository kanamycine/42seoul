/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:32:55 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/20 23:44:48 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	length_nbr(int nbr, char *base, int length)
{
	int	base_length;
	unsigned int nb;

	base_length = ft_length(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		length++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_length)
	{
		nb /= base_length;
		length++;
	}
	length++;
	return (length);
}

void	ft_putnbr_base(int nbr, char *base, char *nbrf)
{
	int		length_base;
	long	nb;
	int		i;
	int		len_nbrf;

	length_base = ft_length(base);
	len_nbrf = length_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nbrf--;
	while (nb >= length_base)
	{
		nbrf[len_nbrf] = base[nb % length_base];
		nb /= length_base;
		len_nbrf--;
	}
	if (nb < length_base)
		nbrf[i] = base[nb];
}
