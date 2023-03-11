/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:52:01 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/11 22:38:21 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void order_three(t_data *data)
{
	int one;
	int two;
	int three;

	one = data->a.stack[0];
	two = data->a.stack[1];
	three = data->a.stack[2];
	if (one < two && one < three && two > three)
	{
		rra(data);
		sa(data);
	}
	else if (one > two && one < three && two < three)
		sa(data);
	else if (one < two && one > three && two > three)
		rra(data);
	else if (two < three && one > two && one > three)
		ra(data);
	else if (two > three && one > two && one > three)
	{
		ra(data);
		sa(data);
	}
}
