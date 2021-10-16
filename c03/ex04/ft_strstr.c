/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 22:29:36 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/16 22:41:06 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*(to_find + j) == '\0')
		return (str);
	while (*(str + i) != '\0')
	{
		while (*(str + i + j) == *(to_find + j) && *(str + i + j) != '\0')
			j++;
		if (*(to_find + j) == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
