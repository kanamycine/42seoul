/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:27:32 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/16 17:57:08 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_true(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int capital;

	i = 0;
	capital = 1;
	while (str[i] != '\0')
	{
		if (capital == 0 && is_true(str[i]) == 1)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += ' ';
		}
		if (capital == 1 && is_true(str[i]) == 1)
		{
			capital = 0;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ' ';
		}
		if (!is_true(str[i]))
			capital = 1;
		i++;
	}
	return (str);
}
