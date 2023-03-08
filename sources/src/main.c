/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:25:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/08 17:37:26 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_ps data;

	ctrl_num(argc - 1, argv);
	data.stack_a = ft_calloc(argc, sizeof(int));
	data.stack_b = ft_calloc(argc, sizeof(int));
	data.len = argc - 1;
	add_num(&data, argv);
	ctrl_num_dupl(&data);

	ss(&data);

	int i = 0;
	while (i < argc - 1)
	{
		printf(YELLOW " a:%d, b:%d\n", data.stack_a[i], data.stack_b[i]);
		i++;
	}
	free(data.stack_a);
	free(data.stack_b);
}
