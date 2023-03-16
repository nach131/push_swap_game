/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:44:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/16 13:30:52 by nmota-bu         ###   ########.fr       */
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

void ctrl_num(int size, char **str)
{
	int i;
	int j;

	i = 1;
	while (i <= size)
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
			j++;
		while (str[i][j])
		{
			if (ft_isdigit(str[i][j]) == 0)
			{
				ft_message(DANGER, ERROR_1);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void init_data(t_data *data, int size)
{
	t_ps *a;
	t_ps *b;

	a = &data->a;
	b = &data->b;

	ft_bzero(data, sizeof(t_data));
	data->tp = ft_calloc(size, sizeof(int));

	a->stack = ft_calloc(size, sizeof(int));
	b->stack = ft_calloc(size, sizeof(int));
	data->size = size;
	data->a.top = -1;
	data->b.top = -1;
}

void add_num(t_data *data, char **n)
{
	int i;

	i = 1;
	while (i <= data->size)
	{
		ctrl_int(n[i]);
		data->tp[i - 1] = ft_atoi(n[i]);
		// push(data->a.stack, &data->a.top, ft_atoi(n[i]), data->size);
		// push_a(data->a, &data->a.top, ft_atoi(n[i]));
		// PUSH NUMRO AL STACK A
		i++;
	}
}

// OK UPGRADE
void ctrl_num_dupl(t_data *data)
{
	int i;
	int j;

	i = 0;
	while (i < data->size)
	{
		j = 0;
		while (j < data->size)
		{
			if (i != j)
				// if (data->a.stack[i] == data->a.stack[j])
				if (data->tp[i] == data->tp[j])
				{
					ft_message(DANGER, ERROR_2);
					exit(1);
				}
			j++;
		}
		i++;
	}
}

// OK UPGRADE
void ctrl_sorted(t_data *data)
{
	int i;
	int order;

	order = 1;
	i = 0;
	while (i < data->size - 1)
	{
		if (data->tp[i] > data->tp[i + 1])
			order = 0;
		i++;
	}
	if (order)
	{
		ft_message(INFO, INFO_1);
		exit(1);
	}
}
