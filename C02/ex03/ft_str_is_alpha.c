/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:04:50 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/14 00:03:02 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int idx;

	idx = 0;
	if (*str == '\0')
		return (1);
	while (*(str + idx) != '\0')
	{
		if(!(*(str + idx) >= '0' && *(str + idx) <= '9'))
				return (0);
		idx++;
	}
	return (1);
}

int	main(void)
{
	char str [7] = "string";
	int i = ft_str_is_alpha(str);
	printf("%d", i);
	char str1 [7] = "123kj";
	int j = ft_str_is_alpha(str1);
	printf("%d", j);
	char str2 [7] = "11111";
	int k = ft_str_is_alpha(str2);
	printf("%d", k);
}
