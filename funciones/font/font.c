/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   font.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:34:00 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/23 19:49:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../../sources/mlx/mlx.h"

int	main(void)
{
	void	*mlx;
	void	*win;
	void	*font_img;
	char	*text;

	text = "Hola mundo!";
	int font_size = 24; // Tamaño de fuente deseado
	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "Ejemplo de texto");
	font_img = mlx_xpm_file_to_image(mlx, "font.xpm", &font_size, &font_size);
	// Carga una imagen de la fuente deseada
	mlx_put_image_to_window(mlx, win, font_img, 50, 50);
	// Muestra la imagen de la fuente
	mlx_string_put(mlx, win, 50, 50, 0xFFFFFF, text);
	// Muestra el texto en la posición deseada
	mlx_loop(mlx);
	return (0);
}

// gcc -framework OpenGL -framework AppKit font.c ../../sources/mlx/libmlx.a
