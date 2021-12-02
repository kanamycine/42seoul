/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:04:50 by jinychoi          #+#    #+#             */
/*   Updated: 2021/12/02 22:13:11 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	idx;


	idx = 0;
	if (*str == '\0')
		return (1);
	while (*(str + idx) != '\0')
	{
		if (!(*(str + idx) >= '0' && *(str + idx) <= '9'))
			return (0);
		idx++;
	}
	return (1);
}
