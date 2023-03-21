#include <stdio.h>
#include <stdlib.h>

enum
{
	SA,
	SB,
	RA,
	RB,
	RRA,
	RRB,
	PA,
	PB,
};

typedef struct s_stack
{
	int num;
	int index;
	struct s_stack *next;
} t_stack;

typedef struct s_data
{
	int size;
	int *tp;
} t_data;

void pa_pb(t_stack **stack_a, t_stack **stack_b, int order)
{
	t_stack *tmp;

	if (order == PA)
	{
		if (*stack_b)
		{
			tmp = *stack_b;
			*stack_b = (*stack_b)->next;
			tmp->next = *stack_a;
			*stack_a = tmp;
			ft_printf("pa\n");
		}
	}
	if (order == PB)
	{
		if (*stack_a)
		{
			tmp = *stack_a;
			*stack_a = (*stack_a)->next;
			tmp->next = *stack_b;
			*stack_b = tmp;
			ft_printf("pb\n");
		}
	}
}

void rra_rrb(t_stack **stack, int order)
{
	t_stack *prev;
	t_stack *last;

	if ((*stack) && (*stack)->next)
	{
		prev = NULL;
		last = *stack;
		while (last->next)
		{
			prev = last;
			last = last->next;
		}
		prev->next = NULL;
		last->next = *stack;
		*stack = last;
		if (order == RRA)
			ft_printf("rra\n");
		else if (order == RRB)
			ft_printf("rrb\n");
	}
}

void rrr(t_stack **a, t_stack **b)
{
	rra_rrb(a, RRA);
	rra_rrb(b, RRB);
}

void ra_rb(t_stack **stack, int order)
{
	t_stack *last;

	if ((*stack) && (*stack)->next)
	{
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = *stack;
		*stack = (*stack)->next;
		last->next->next = NULL;
		if (order == RA)
			ft_printf("ra\n");
		else if (order == RB)
			ft_printf("rb\n");
	}
}

void rr(t_stack **a, t_stack **b)
{
	ra_rb(a, RA);
	ra_rb(b, RB);
}

void sa_sb(t_stack **stack, int order)
{
	t_stack *tmp;

	if ((*stack) && (*stack)->next)
	{
		tmp = (*stack)->next;
		(*stack)->next = tmp->next;
		tmp->next = (*stack);
		(*stack) = tmp;
		if (order == SA)
			ft_printf("sa\n");
		else if (order == SB)
			ft_printf("sb\n");
	}
}

void ss(t_stack **a, t_stack **b)
{
	sa_sb(a, SA);
	sa_sb(b, SB);
}
