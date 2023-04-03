/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_game.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:34:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/03 21:43:21 by nmota-bu         ###   ########.fr       */
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
	ON_DESTROY = 17
};

enum
{
	KEY_ESC = 53,
};

enum
{
	DOWN,
	UP,
};

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

typedef struct s_images
{
	char		*wall;
	char		*btt[1][2];
}				t_images;

typedef struct s_graphic
{
}				t_graphic;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	t_images	img;
}				t_game;

#endif
