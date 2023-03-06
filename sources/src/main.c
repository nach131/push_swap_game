/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:25:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/07 00:19:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdlib.h>

int main(int argc, char *argv[])
{
	t_ps data;

	ft_bzero(&data, sizeof(t_ps));
	data.stack_a = ft_calloc(argc, sizeof(int));
	data.stack_b = ft_calloc(argc, sizeof(int));

	data.len = argc - 1;
	int i = 0;
	while (i < argc - 1)
	{
		if (*argv[1] >= '0' && *argv[1] <= '9')
		{
			data.stack_a[i] = ft_atoi(argv[i + 1]);
			data.stack_b[i] = atoi(argv[i + 1]);
		}
		else
		{
			printf(RED "No es numero\n");
			exit(1);
		}
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		ft_printf(YELLOW " a:%d, b:%d\n", data.stack_a[i], data.stack_b[i]);
		i++;
	}
	ft_printf(RED "%s\n", TOMATE);
	free(data.stack_a);
	free(data.stack_b);
}
