/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:44:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/19 00:21:15 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"
#include <limits.h>

void static ctrl_int(const char *str)
{
	if (ft_atoi_long(str) > INT_MAX || ft_atoi_long(str) < INT_MIN)
	{
		ft_message(DANGER, ERROR_3);
		exit(1);
	}
}

void init_data(t_data *data, int size)
{
	ft_bzero(data, sizeof(t_data));
	data->tp = ft_calloc(size, sizeof(int));
	data->size = size;
}

t_stack *stack_new(int value)
{
	t_stack *new;

	new = ft_calloc(1, sizeof(t_stack));
	new->num = value;
	new->index = -1;
	return (new);
}

t_stack *add_num(t_data *data, char **n)
{
	int i;
	int j;
	t_stack *stack;
	i = 1;
	j = data->size - 1;
	while (j >= 0)
	{
		ctrl_int(n[i]);
		data->tp[j] = ft_atoi(n[i]);
		if (i == 1)
			stack = stack_new(data->tp[j]);

		i++;
		j--;
	}
	return (stack);
}

// void index_stack(int *tp, t_num *stack, int size)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	while (i < size)
// 	{
// 		j = 0;
// 		while (j < size)
// 		{
// 			if (tp[i] == stack[j].num)
// 				stack[j].index = i;
// 			j++;
// 		}
// 		i++;
// 	}
// }
