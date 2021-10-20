/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:30:38 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/16 21:38:26 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && (*(s1 + i) != '\0' || *(s2 + i) != '\0'))
		i++;
	return (*(s1 + i) - *(s2 + i));
}