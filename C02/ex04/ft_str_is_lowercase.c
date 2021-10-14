/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:17:11 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/14 18:48:09 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;
	int res;

	i = 0;
	if (*(str + i) == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		if(*(str + i) < 'a'|| *(str + i) > 'z')
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char str [5] = "sameu";
	char str1 [5] = "saMeu";
	char str2 [1];
	char str3 [5] = "saeeD";
	char str4 [5] = "Aaseu";

	str2[0] = '\0';
	printf("%d", ft_str_is_lowercase(str));
	printf("%d", ft_str_is_lowercase(str1));
	printf("%d", ft_str_is_lowercase(str2));
	printf("%d", ft_str_is_lowercase(str3));
	printf("%d", ft_str_is_lowercase(str4));
}
