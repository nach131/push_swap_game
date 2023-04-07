/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_game.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:34:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 18:27:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_GAME_H
# define PUSH_SWAP_GAME_H

# include "../libft/inc/colors.h"
# include "../libft/inc/error.h"
# include "../libft/inc/ft_printf.h"
# include "../libft/inc/libft.h"

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}					t_stack;

typedef struct s_data
{
	t_stack			*a;
	t_stack			*b;
	int				size;
	int				*tp;
}					t_data;

typedef struct s_images
{
	char			*wall;
	char			*mov;
	char			*btt[11][2];
	char			*chip[18];
}					t_images;

typedef struct s_game
{
	void			*mlx;
	void			*win;
	int				mouse;
	t_images		img;
	t_data			*data;
}					t_game;

void				init_img_btt(t_game *g);
void				init_img_chip(t_game *g);
void				put_chip_tmp(t_game *g);
void				mouse_down(int button, int x, int y, t_game *g);
void				mouse_up(int button, int x, int y, t_game *g);
void				lap_chip(t_game *g, void (*function)(int chip, int i,
							t_game *g, int stack));
// void				lap_chip(t_stack *stack, t_game *g,
// 						void (*function)(int chip, int i, t_game *g));
void				locate_chip(int chip, int i, t_game *g, int stack);

//========= push_swap============================================================

void				init_data(t_data *data, int len);
void				random_chip(t_data *data);

t_stack				*add_num(t_data *data);
t_stack				*stack_new(int value);
void				stackadd_back(t_stack **stack, t_stack *new);
void				sa_sb(t_stack **stack);
void				ss(t_stack **a, t_stack **b);

//==========Work=======================
void				print_tp_dos(int *arr, int len);
void				print_lst(t_stack *num);

#endif
