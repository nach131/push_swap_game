/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_game.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:34:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/23 22:29:21 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_GAME_H
# define PUSH_SWAP_GAME_H

# include "../libft/inc/colors.h"
# include "../libft/inc/error.h"
# include "../libft/inc/ft_printf.h"
# include "../libft/inc/libft.h"
# include "push_swap_enum.h"

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}					t_stack;

typedef struct s_data
{
	t_stack			*a;
	t_stack			*b;
	int				game;
	int				sort;
	int				size;
	int				*tp;

}					t_data;

typedef struct s_images
{
	char			*wall[5];
	char			*btt[11][2];
	char			*chip[18];
	char			*num[10];
}					t_images;

typedef struct s_game
{
	void			*mlx;
	void			*win;
	int				mouse;
	int				count;
	t_images		img;
	t_data			*data;
}					t_game;

void				start_game(t_data *data, int size);
void				end_game(t_game *g);
void				init_win(t_game *g);
void				key_hook(int keycode, t_game *game);
void				ctrl_win(t_game *g);
void				ctrl_win_end(t_game *g);
void				init_img_btt(t_game *g);
void				init_img_chip(t_game *g);
void				put_chip_tmp(t_game *g);
void				put_movements(t_game *g);
void				mouse_down(int button, int x, int y, t_game *g);
void				mouse_up(int button, int x, int y, t_game *g);
void				lap_chip(t_game *g, void (*function)(int chip, int i,
							t_game *g, int stack));

void				locate_chip(int chip, int i, t_game *g, int stack);

void				mouse_sa_sb(t_game *g, int type);
void				mouse_ss(t_game *g);
void				mouse_ra_rb(t_game *g, int type);
void				mouse_rr(t_game *g);
void				mouse_rra_rrb(t_game *g, int type);
void				mouse_rrr(t_game *g);
void				mouse_pa_pb(t_game *g, int type);

int					len_stack(t_stack **stack);
void				clear_stack(t_stack *stack);

//========= push_swap============================================================

void				random_chip(t_data *data);

t_stack				*add_num(t_data *data);
t_stack				*stack_new(int value);
void				stackadd_back(t_stack **stack, t_stack *new);
void				put_wall(t_game *g, int type);
int					ctrl_sorted(t_stack *a, int size);

//==========Work=======================

void				print_tp_dos(int *arr, int len);
void				print_lst(t_stack *num);
void				print_lst_dos(t_stack *a, t_stack *b);

#endif
