/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:44:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/17 00:41:18 by nmota-bu         ###   ########.fr       */
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

	data->a.stack = ft_calloc(size, sizeof(t_num));
	data->a.top = -1;
	data->b.stack = ft_calloc(size, sizeof(t_num));
	data->b.top = -1;
}

// void add_num(t_data *data, char **n)
// {
// 	int i;

// 	i = 1;
// 	while (i <= data->size)
// 	{
// 		ctrl_int(n[i]);
// 		data->tp[i - 1] = ft_atoi(n[i]);
// 		data->a.stack[i - 1] = push_num(ft_atoi(n[i]), &data->a.top);
// 		data->b.stack[i - 1] = push_num(ft_atoi(n[i]), &data->b.top);
// 		i++;
// 	}
// }

void add_num(t_data *data, char **n)
{
	int i;
	int pos;

	i = 1;
	pos = data->size - 1;
	while (i <= data->size)
	{
		ctrl_int(n[i]);
		data->tp[pos] = ft_atoi(n[i]);
		data->a.stack[pos] = push_num(ft_atoi(n[i]), &data->a.top);
		data->b.stack[pos] = push_num(ft_atoi(n[i]), &data->b.top);
		i++;
		pos--;
	}
}

void index_stack(int *tp, t_num *stack, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tp[i] == stack[j].num)
				stack[j].index = i;
			j++;
		}
		i++;
	}
}
