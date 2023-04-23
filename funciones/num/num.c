/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:46:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/23 21:57:58 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../../sources/libft/inc/libft.h"
#include "../../sources/mlx/mlx.h"
#include <stdlib.h>

enum
{
	ON_KEYPRESS = 2,
	ON_DESTROY = 17,
	KEY_1 = 18, // new img & put img to windows
	KEY_2 = 19,
	KEY_3 = 20,
	KEY_ESC = 53,
};
typedef struct s_game
{
	void	*mlx;
	void	*win;
	char	*num[10];
	char	*img;
}			t_game;

char static	*path_img_num(int n)
{
	char	*nbr;
	char	*s1;
	char	*s2;

	nbr = ft_itoa(n);
	s1 = ft_strjoin("../../sources/xpm/num/", nbr);
	s2 = ft_strjoin(s1, ".xpm");
	free(s1);
	free(nbr);
	return (s2);
}

void	load_num(t_game *game)
{
	int		w;
	int		h;
	int		i;
	char	*path;

	i = 0;
	while (i < 10)
	{
		path = path_img_num(i);
		game->num[i] = mlx_xpm_file_to_image(game->mlx, path, &w, &h);
		free(path);
		i++;
	}
}

void	put_num(t_game *g, int num)
{
	int	i;

	(void)g;
	i = 0;
	while (num)
	{
		if (i == 0)
			mlx_put_image_to_window(g->mlx, g->win, g->num[num % 10], 287, 83);
		if (i == 1)
			mlx_put_image_to_window(g->mlx, g->win, g->num[num % 10], 262, 83);
		if (i == 2)
			mlx_put_image_to_window(g->mlx, g->win, g->num[num % 10], 237, 83);
		printf("%d\n", num % 10);
		i++;
		num /= 10;
	}
}

int	main(int n, char **str)
{
	int		num;
	t_game	game;
	int		w;
	int		h;

	if (n == 2)
	{
		num = atoi(str[1]);
		game.mlx = mlx_init();
		game.win = mlx_new_window(game.mlx, 560, 560, "nach131 push_swap");
		load_num(&game);
		game.img = mlx_xpm_file_to_image(game.mlx, "../../sources/xpm/end.xpm",
				&w, &h);
		mlx_put_image_to_window(game.mlx, game.win, game.img, 0, 0);
		put_num(&game, num);
		// mlx_put_image_to_window(game.mlx, game.win, game.num[3], 237, 83);
		// mlx_put_image_to_window(game.mlx, game.win, game.num[4], 262, 83);
		// mlx_put_image_to_window(game.mlx, game.win, game.num[2], 287, 83);
		mlx_hook(game.win, ON_DESTROY, 1L << 0, (void *)exit, &game);
		mlx_loop(game.mlx);
		return (0);
	}
}

// gcc -framework OpenGL -framework AppKit num.c
// ../../sources/mlx/libmlx.a ../../sources/libft/libft.a
