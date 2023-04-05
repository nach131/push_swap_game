/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:37:03 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/01 18:37:58 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap_bonus.h"

void	ctrl_num(int size, char **str)
{
	int	i;
	int	j;

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

void	ctrl_num_dupl(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->size)
	{
		j = 0;
		while (j < data->size)
		{
			if (i != j)
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

void	ctrl_sorted(t_data *data)
{
	int	i;
	int	order;

	order = 1;
	i = 0;
	while (i < data->size - 1)
	{
		if (data->tp[i] < data->tp[i + 1])
			order = 0;
		i++;
	}
	if (order)
	{
		ft_message(INFO, INFO_1);
		exit(1);
	}
}

void	ctrl_order(t_stack **a, t_stack **b)
{
	(void)a;
	(void)b;
	ft_message(DANGER, ERROR_4);
	exit(0);
}

void	ctrl_sorted_user(t_stack *a)
{
	while (a && a->next)
	{
		if (a->num > a->next->num)
		{
			ft_message(DANGER, ERROR_5);
			exit(0);
		}
		a = a->next;
	}
	ft_message(SUCCESS, INFO_2);
}
