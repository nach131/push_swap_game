/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:29:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/26 09:41:44 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void static	sort_chunk_a(t_stack **a, t_stack **b, t_data *data)
{
	int	i;

	i = 0;
	while (i <= 2)
	{
		while (ctrl_pb(data->tp, data->chunk[i][START], data->chunk[i][END]
				- 1))
		{
			if (((*a)->index <= data->chunk[i][END]))
			{
				switch_tp(data->tp, (*a)->index - 1, ON);
				pa_pb(a, b, PB);
				if (((*b)->index <= data->chunk[i][MIDDLE]))
					ra_rb(b, RB);
			}
			if ((*a))
				if (((*a)->index > data->chunk[i][END]))
					ra_rb(a, RA);
		}
		i++;
	}
}

void	free_chunk(int **chunk)
{
	int	i;

	(void)chunk;
	i = 0;
	while (i <= 2)
	{
		free(chunk[i]);
		i++;
	}
}

void	push_hundred(t_stack **a, t_stack **b, t_data *data)
{
	ft_bzero(data->tp, data->size * sizeof(int));
	sort_chunk_a(a, b, data);
	free_chunk(data->chunk);
}

// 	one/2: 5
// one: 10
// 	two/2: 15
// two: 20
// 	three/2: 25
// three: 30
