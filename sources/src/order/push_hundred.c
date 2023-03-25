/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:29:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/25 18:34:18 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void static	chunk(t_stack **a, t_stack **b, t_data *data)
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
	// free(chunk);
}

void	print_cal(t_data *data)
{
	int	two;
	int	three;
	int	md_three;
	int	one;
	int	md_one;
	int	md_two;

	one = data->size / 3;
	two = 2 * (data->size / 3);
	three = data->size;
	md_one = one / 2;
	md_two = (one + two) / 2;
	md_three = (two + three) / 2;
	printf(YELLOW "\tmd_one: %d\n", md_one);
	printf(MAGENTA "one: %d\n", one);
	printf(YELLOW "\tmd_two: %d\n", md_two);
	printf(MAGENTA "two: %d\n", two);
	printf(YELLOW "\tmd_three: %d\n", md_three);
	printf(MAGENTA "three: %d\n", three);
}

void	push_hundred(t_stack **a, t_stack **b, t_data *data)
{
	ft_bzero(data->tp, data->size * sizeof(int));
	chunk(a, b, data);
	free_chunk(data->chunk);
}

// 	one/2: 5
// one: 10
// 	two/2: 15
// two: 20
// 	three/2: 25
// three: 30
