/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:31:53 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/16 17:48:45 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	i = 0;
	
	if(*(str + i) == '\0')
		return 1;
	while (*(str + i) != '\0')
	{
		if(!(*(str + i) >= 'A' && *(str + i) <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}


int main(void)
{
	char str5 [6] = "SAMEU";
	char str1 [5] = "saMeu";
	char str2 [1];
	char str3 [5] = "saeeD";
	char str4 [5] = "Aaseu";

	str2[0] = '\0';
	printf("%d", ft_str_is_uppercase(str5));
	printf("\n");
	printf("%d", ft_str_is_uppercase(str1));
	printf("\n");
	printf("%d", ft_str_is_uppercase(str2));
	printf("\n");
	printf("%d", ft_str_is_uppercase(str3));
	printf("\n");
	printf("%d", ft_str_is_uppercase(str4));
	printf("\n");
}
