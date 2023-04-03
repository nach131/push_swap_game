/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:12:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/03 13:49:25 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../../sources/mlx/mlx.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_game
{
	void	*mlx;
	void	*win;
	void	*img;
}			t_game;

enum
{
	ON_KEYPRESS = 2,
	ON_DESTROY = 17,
	KEY_1 = 18, // new img & put img to windows
	KEY_2 = 19,
	KEY_3 = 20,
	KEY_ESC = 53,
};

int	main(void)
{
	t_game	game;
	int		w;
	int		h;

	game.mlx = mlx_init();
	game.win = mlx_new_window(game.mlx, 560, 520, "nach131 So Long");
	game.img = mlx_xpm_file_to_image(game.mlx, "../../sources/xpm/01.xpm", &w,
			&h);
	mlx_put_image_to_window(game.mlx, game.win, game.img, 0, 0);
	mlx_hook(game.win, ON_DESTROY, 1L << 0, (void *)exit, &game);
	// mlx_key_hook(game.win, (void *)key_push, &game);
	mlx_loop(game.mlx);
	return (0);
}

// gcc -framework OpenGL -framework AppKit win.c ../../sources/mlx/libmlx.a
