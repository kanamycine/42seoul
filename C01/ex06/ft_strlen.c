/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:57:32 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/13 16:16:04 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int cnt;

	i = 0;
	cnt = 0;
	while (*(str + i) != '\0')
	{
		cnt++;
		i++;
	}
	return (cnt);
}

int	main(void)
{
	char str [7] = "string";
	int i =	ft_strlen(str);
	printf("%d", i);
}
