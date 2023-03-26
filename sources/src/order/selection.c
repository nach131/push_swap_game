/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:51:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/26 09:55:36 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	print_chunk(int n, int **chunk)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf(GREEN "START: %d\n", chunk[i][0]);
		printf(ORANGE "MIDDLE: %d\n", chunk[i][1]);
		printf(CYAN "END: %d\n", chunk[i][2]);
		i++;
	}
}

void	selection(t_stack **a, t_stack **b, t_data *data)
{
	if (data->size == 2)
		sa_sb(a, SA);
	else if (data->size == 3)
		sort_three(a);
	else if (data->size > 3 && data->size <= 5)
		sort_five(a, b);
	else if (data->size > 5 && data->size <= 100)
	{
		// init_chunk_a(data);
		push_biggest(a, b, data, 3);
		pop_biggest(a, b, data);
	}
	else
	{
		push_biggest(a, b, data, 6);
		pop_biggest(a, b, data);
	}
}
