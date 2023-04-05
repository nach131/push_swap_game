/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_game.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:34:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/05 10:05:57 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_GAME_H
# define PUSH_SWAP_GAME_H

# include "../libft/inc/colors.h"
# include "../libft/inc/error.h"
# include "../libft/inc/ft_printf.h"
# include "../libft/inc/libft.h"

enum
{
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17,
	KEY_ESC = 53,
};

enum
{
	DOWN,
	UP,
};

enum
{
	CHIP_0 = 41,
	STACK_A = 5,
	CHIP_1 = 62,
	CHIP_2 = 84,
	CHIP_3 = 106,
	CHIP_4 = 128,
	CHIP_5 = 150,
	CHIP_6 = 172,
	CHIP_7 = 194,
	CHIP_8 = 216,
	CHIP_9 = 238,
	CHIP_10 = 260,
	CHIP_11 = 282,
	CHIP_12 = 303,
	CHIP_13 = 326,
	STACK_B = 294,
	CHIP_14 = 348,
	CHIP_15 = 370,
	CHIP_16 = 392,
	CHIP_17 = 414

};

enum
{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
};

typedef struct s_images
{
	char		*wall;
	char		*mov;
	char		*btt[11][2];
	char		*chip[18];
}				t_images;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	t_images	img;
}				t_game;

void			init_img_btt(t_game *g);
void			init_img_chip(t_game *g);
void			put_chip(t_game *g);

#endif
