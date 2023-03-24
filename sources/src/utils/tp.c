/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:57:32 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/24 13:00:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	switch_tp(int tp[], int n, int type)
{
	if (type)
		tp[n] = 1; // poner ON
	if (!type)
		tp[n] = 0; // OFF
	if (type == 2)
		tp[n] = -1;
}

int	tp_is_act(int tp[], int n)
{
	if (tp[n] == 1)
		return (1);
	return (0);
}

int	ctrl_pb(int tp[], int star, int end)
{
	while (star <= end)
	{
		if (tp[star] == 0)
			return (1);
		star++;
	}
	return (0);
}

int	ctrl_back(int tp[], int i)
{
	if (tp[i] == -1)
		return (1);
	return (0);
}
