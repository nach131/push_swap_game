/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:44:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 14:55:53 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"
#include <limits.h>

void	init_data(t_data *data, int size)
{
	ft_bzero(data, sizeof(t_data));
	data->tp = ft_calloc(size, sizeof(int));
	data->size = size;
}

t_stack	*add_num(t_data *data, char **n)
{
	int		i;
	int		j;
	t_stack	*stack;

	i = 1;
	j = data->size - 1;
	while (j >= 0)
	{
		ctrl_int(n[i]);
		data->tp[j] = ft_atoi(n[i]);
		if (i == 1)
			stack = stack_new(data->tp[j]);
		else
			stackadd_back(&stack, stack_new(data->tp[j]));
		i++;
		j--;
	}
	return (stack);
}
