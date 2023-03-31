/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:47:02 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/31 18:04:25 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/inc/colors.h"
# include "../libft/inc/error.h"
# include "../libft/inc/ft_printf.h"
# include "../libft/inc/libft.h"

# define ERROR_1 "Error: Argument is not an integer"
# define ERROR_2 "Error: Duplicate numbers"
# define ERROR_3 "Error: Numbers greater than integer"
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

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_data
{
	int				size;
	int				**chunk;
	int				*tp;
}					t_data;

void				ctrl_num(int size, char **str);
void				ctrl_num_dupl(t_data *data);
void				ctrl_sorted(t_data *data);
void				init_data(t_data *data, int size);
t_stack				*add_num(t_data *data, char **n);

t_stack				*stack_new(int value);
void				stackadd_back(t_stack **stack, t_stack *new);
void				clear_stack(t_stack *stack);

void				sa_sb(t_stack **stack);
void				ss(t_stack **a, t_stack **b);
void				pa_pb(t_stack **stack_a, t_stack **stack_b, int order);
void				ra_rb(t_stack **stack);
void				rr(t_stack **a, t_stack **b);
void				rra_rrb(t_stack **stack);
void				rrr(t_stack **a, t_stack **b);
#endif
