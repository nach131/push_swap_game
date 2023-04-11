/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 10:20:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/11 17:12:15 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap_game.h"

void	print_tp(t_data *data)
{
	int	i;

	i = data->size - 1;
	while (i >= 0)
	{
		printf(ORANGE "%d :%d\n", data->tp[i], i);
		i--;
	}
}

void	print_lst(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	if (tmp)
	{
		while (tmp)
		{
			printf(CYAN "   %d \n", tmp->num);
			tmp = tmp->next;
		}
	}
}

void	print_lst_dos(t_stack *a, t_stack *b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = a;
	tmp_b = b;
	ft_printf(GREEN "----A----    ----B----\n");
	while (tmp_a || tmp_b)
	{
		if (tmp_a)
		{
			ft_printf(YELLOW "   %d", tmp_a->num);
			tmp_a = tmp_a->next;
		}
		else
			ft_printf("     ");
		if (tmp_b)
		{
			ft_printf(CYAN "\t\t%d", tmp_b->num);
			tmp_b = tmp_b->next;
		}
		ft_printf("\n");
	}
}
