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
			printf("pa\n");
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
			printf("pb\n");
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
			printf("rra\n");
		else if (order == RRB)
			printf("rrb\n");
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
			printf("ra\n");
		else if (order == RB)
			printf("rb\n");
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
			printf("sa\n");
		else if (order == SB)
			printf("sb\n");
	}
}

void ss(t_stack **a, t_stack **b)
{
	sa_sb(a, SA);
	sa_sb(b, SB);
}

int len_stack(t_stack **stack)
{
	t_stack *tmp = *stack;
	int i = 0;

	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int index_middle(t_stack *a)
{
	t_stack *tmp = a;
	int sum = 0;
	int len = len_stack(&a);

	while (tmp)
	{
		sum += tmp->index;
		tmp = tmp->next;
	}
	sum /= len;
	return (sum);
}

void minors_b(t_stack **a, t_stack **b)
{
	int i;
	int pivot;

	i = len_stack(a) / 2;
	pivot = index_middle(*a);
	while (i != 0)
	{
		while ((*a)->index > pivot)
			ra_rb(a, RA);
		while ((*a)->index <= pivot)
		{
			pa_pb(a, b, PB);
			if (i > 0)
				i--;
		}
	}
}
