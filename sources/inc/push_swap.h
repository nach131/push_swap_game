/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:26:42 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/25 10:50:35 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/inc/colors.h"
# include "../libft/inc/error.h"
# include "../libft/inc/ft_printf.h"
# include "../libft/inc/libft.h"

# define ERROR_1 "Error: Argument is not an integer"
# define ERROR_2 "Error: Duplicate numbers"
# define ERROR_3 "Error: Numbers greater than integer"
# define ERROR_4 "Error: Stack overflow"
# define ERROR_5 "Error: Stack underflow"
# define ERROR_5 "Error: Stack underflow"
# define INFO_1 "Info: It's already sorted"

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
	XX,
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
	int				flag;
	int				*tp;
}					t_data;

void				ctrl_num(int len, char **str);
void				ctrl_num_dupl(t_data *data);
void				ctrl_sorted(t_data *data);
void				init_data(t_data *data, int len);

t_stack				*add_num(t_data *data, char **n);
t_stack				*stack_new(int value);
t_stack				*stack_last(t_stack *stack);
void				stackadd_back(t_stack **stack, t_stack *new);
void				index_stack(t_stack *stack, int tb[], int size);
void				clear_stack(t_stack *stack);
int					last_index(t_stack *stack);

int					len_stack(t_stack **stack);
int					find_small(t_stack **stack);

void				selection(t_stack **a, t_stack **b, t_data *data);

void				sa_sb(t_stack **stack, int order);
void				ss(t_stack **a, t_stack **b);
void				ra_rb(t_stack **stack, int order);
void				rr(t_stack **a, t_stack **b);
void				rra_rrb(t_stack **stack, int order);
void				rrr(t_stack **a, t_stack **b);
void				pa_pb(t_stack **stack_a, t_stack **stack_b, int order);

void				quickSort(int arr[], int low, int high);

void				sort_three(t_stack **a);
void				sort_five(t_stack **a, t_stack **b);
void				push_hundred(t_stack **a, t_stack **b, t_data *data);
void				pop_hundred(t_stack **a, t_stack **b, t_data *data);

int					first_inx(t_stack *stack);
void				switch_tp(int tp[], int n, int type);
int					tp_is_act(int tp[], int n);
int					ctrl_pb(int tp[], int star, int end);
int					ctrl_back(int tp[], int i);

//=====================================
void				print_tp(t_data *data);
void				print_lst(t_stack *num);

#endif
