/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:39:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/25 18:49:02 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void static	c_one(t_data *data)
{
	data->chunk[0] = ft_calloc(3, sizeof(int));
	data->chunk[0][START] = 0;
	data->chunk[0][END] = data->size / 3;
	data->chunk[0][MIDDLE] = data->chunk[0][END] / 2;
}

void static	c_two(t_data *data)
{
	data->chunk[1] = ft_calloc(3, sizeof(int));
	data->chunk[1][START] = data->size / 3;
	data->chunk[1][END] = 2 * (data->size / 3);
	data->chunk[1][MIDDLE] = (data->chunk[1][START] + data->chunk[1][END]) / 2;
}

void static	c_three(t_data *data)
{
	data->chunk[2] = ft_calloc(3, sizeof(int));
	data->chunk[2][START] = 2 * (data->size / 3);
	data->chunk[2][END] = data->size;
	data->chunk[2][MIDDLE] = (data->chunk[2][START] + data->chunk[2][END]) / 2;
}

void	init_chunk_a(t_data *data)
{
	data->chunk = ft_calloc(3, sizeof(int *));
	c_one(data);
	c_two(data);
	c_three(data);
}
