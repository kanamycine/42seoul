/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:54:46 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/13 13:06:17 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
}
