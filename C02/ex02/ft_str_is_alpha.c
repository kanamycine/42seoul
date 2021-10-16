/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:48:54 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/16 17:45:36 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] < 'A')
			return (0);
		else if (str[idx] > 'Z' && str[idx] < 'a')
			return (0);
		else if (str[idx] > 'z')
			retrun (0);
		idx++;
	}
	return (1);
}
