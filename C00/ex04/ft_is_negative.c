/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:30:35 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/10 16:35:57 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(2);
	ft_is_negative(999);
	ft_is_negative(13);
}
