/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/03 13:56:13 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "push_swap_game.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct s_game
// {
// 	void	*mlx;
// 	void	*win;
// 	void	*img;
// }			t_game;

int	main(void)
{
	t_game	game;
	int		w;
	int		h;

	game.mlx = mlx_init();
	game.win = mlx_new_window(game.mlx, 560, 520, "nach131 So Long");
	// game.img = mlx_xpm_file_to_image(game.mlx, "../sources/xpm/01.xpm", &w,
	// &h);
	// mlx_put_image_to_window(game.mlx, game.win, game.img, 0, 0);
	game.images.wall = mlx_xpm_file_to_image(game.mlx, "../sources/xpm/01.xpm",
			&w, &h);
	mlx_put_image_to_window(game.mlx, game.win, game.images.wall, 0, 0);
	mlx_hook(game.win, ON_DESTROY, 1L << 0, (void *)exit, &game);
	// mlx_key_hook(game.win, (void *)key_push, &game);
	mlx_loop(game.mlx);
	return (0);
}
