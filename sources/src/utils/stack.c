/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 00:34:32 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 13:57:25 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap_game.h"

t_stack	*stack_new(int value)
{
	t_stack	*new;

	new = ft_calloc(1, sizeof(t_stack));
	new->num = value;
	return (new);
}

t_stack	*stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->next == NULL)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}

void	stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*item;

	if (!stack)
		return ;
	if (!(*stack))
		*stack = new;
	else
	{
		item = stack_last(*stack);
		item->next = new;
	}
}

void	clear_stack(t_stack *stack)
{
	t_stack	*aux;

	if (stack)
	{
		while (stack)
		{
			aux = stack->next;
			ft_bzero(stack, sizeof(t_stack));
			free(stack);
			stack = aux;
		}
	}
}
