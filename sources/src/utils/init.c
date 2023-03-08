/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:44:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/08 15:21:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void ctrl_num(int len, char **str)
{
	int i;
	int j;

	i = 1;

	while (i <= len)
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

void add_num(t_ps *data, char **n)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i <= data->len)
	{
		ctrl_int(n[i]);
		data->stack_a[j] = ft_atoi(n[i]);
		data->stack_b[j] = atoi(n[i]);
		i++;
		j++;
	}
}

void ctrl_num_dupl(t_ps *data)
{
	int i;
	int j;

	i = 0;
	while (i < data->len)
	{
		j = 0;
		while (j < data->len)
		{
			if (i != j)
				if (data->stack_a[i] == data->stack_a[j])
				{
					ft_message(DANGER, ERROR_2);
					exit(1);
				}
			j++;
		}
		i++;
	}
}
