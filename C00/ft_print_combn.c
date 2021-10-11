/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinychoi <jinychoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:35:30 by jinychoi          #+#    #+#             */
/*   Updated: 2021/10/11 21:30:19 by jinychoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void recursive(int temp, int N,int b,int values[])
{
	if(temp==0)
	{
		int i;

		i=N;

		while(i>=1){
			write(1, &values[i], 1);
			i--;
		}
	}
	else{
		int i;
		i=1;
		while (i<=N){
			if(
