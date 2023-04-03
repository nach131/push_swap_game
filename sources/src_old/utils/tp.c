/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:57:32 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/30 10:31:53 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	switch_tp(int tp[], int n, int type)
{
	if (type)
		tp[n] = ON;
	if (!type)
		tp[n] = OFF;
}

int	tp_is_act(int tp[], int n)
{
	if (tp[n] == ON)
		return (1);
	return (0);
}

int	ctrl_tp(int tp[], int star, int end)
{
	while (star <= end)
	{
		if (tp[star] == OFF)
			return (1);
		star++;
	}
	return (0);
}
