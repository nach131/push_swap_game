/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:26:42 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/06 11:54:31 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// # include "../libft/inc/colors.h"
// # include "../libft/inc/error.h"
// # include "../libft/inc/ft_printf.h"
// # include "../libft/inc/libft.h"

enum
{
	START,
	MIDDLE,
	END,
};

enum
{
	OFF,
	ON,
	BACK,
};


typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_data
{
	int				size;
	// int				**chunk;
	int				*tp;
}					t_data;

// void				ctrl_num(int len, char **str);
// void				ctrl_num_dupl(t_data *data);
// void				ctrl_sorted(t_data *data);
// void				init_data(t_data *data, int len);

// t_stack				*add_num(t_data *data, char **n);
// t_stack				*stack_new(int value);
// t_stack				*stack_last(t_stack *stack);
// void				stackadd_back(t_stack **stack, t_stack *new);
// void				index_stack(t_stack *stack, int tb[], int size);
// void				clear_stack(t_stack *stack);
// int					last_index(t_stack *stack);

// int					len_stack(t_stack **stack);
// int					find_small(t_stack *stack);
// int					find_big(t_stack *stack);

// void				selection(t_stack **a, t_stack **b, t_data *data);

// void				sa_sb(t_stack **stack, int order);
// void				ss(t_stack **a, t_stack **b);
// void				ra_rb(t_stack **stack, int order);
// void				rr(t_stack **a, t_stack **b);
// void				rra_rrb(t_stack **stack, int order);
// void				rrr(t_stack **a, t_stack **b);
// void				pa_pb(t_stack **stack_a, t_stack **stack_b, int order);

// void				quick_sort(int arr[], int low, int high);

// void				sort_three(t_stack **a);
// void				sort_five(t_stack **a, t_stack **b);
// void				pop_biggest(t_stack **a, t_stack **b, t_data *data, int n);
// void				push_biggest(t_stack **a, t_stack **b, t_data *data,
// 						int chunks);

// void				switch_tp(int tp[], int n, int type);
// int					tp_is_act(int tp[], int n);
// int					ctrl_tp(int tp[], int star, int end);

// void				free_chunk(int **chunk, int chunks);

//==========Work=======================
// void				print_tp(t_data *data);
// void				print_lst(t_stack *num);
// void				print_chunk(int n, int **chunk);
// int					last_index(t_stack *stack);

#endif

// if (((*b)->ix <= d->ch[i][MD]) && ((*a)->ix > d->ch[i][ED]))
