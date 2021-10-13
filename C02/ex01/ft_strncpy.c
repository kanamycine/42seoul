/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:58:28 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/13 21:49:34 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (*(src + i) == '\0')
		{
			*(dest + i) == '\0';
			break ;
		}
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
