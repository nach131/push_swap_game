/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:25:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/09 11:07:51 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_data data;

	ctrl_num(argc - 1, argv);
	// init_data(&data, argc);
	ft_bzero(&data, sizeof(t_data));
	data.a.stack = ft_calloc(argc, sizeof(int));
	data.b.stack = ft_calloc(argc, sizeof(int));
	data.size = argc - 1;
	data.a.top = -1;
	data.b.top = -1;

	add_num(&data, argv);
	ctrl_num_dupl(&data);

	// sa(&data);
	// sb(&data);
	ss(&data);

	printf(RED "top_a:%d, top_b:%d\n", data.a.top, data.b.top);
	int i = 0;
	while (i < argc - 1)
	{
		printf(YELLOW " a:%d, b:%d\n", data.a.stack[i], data.b.stack[i]);
		i++;
	}
	free(data.a.stack);
	free(data.b.stack);
}
