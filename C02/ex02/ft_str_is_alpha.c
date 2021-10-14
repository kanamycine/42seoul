/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:48:54 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/13 23:05:43 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	idx;

	idx = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A')
			return (0);
		else if (str[i] > 'Z' && str[i] < 'a')
			return (0);
		else if (str[i] > 'z')
			retrun (0);
		i++;
	}
	return (1);
}
