/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:35:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/30 11:06:49 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	free_chunk(int **chunk, int chunks)
{
	int	i;

	i = 0;
	while (i < chunks)
	{
		free(chunk[i]);
		i++;
	}
}

// ========================================================

void	print_chunk(int n, int **chunk)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf(GREEN "START: %d\n", chunk[i][0]);
		printf(ORANGE "MIDDLE: %d\n", chunk[i][1]);
		printf(CYAN "END: %d\n", chunk[i][2]);
		i++;
	}
}
