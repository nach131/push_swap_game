/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:25:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/06 23:07:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_ps data;

	ft_bzero(&data, sizeof(t_ps));
	data.len = argc - 1;
	data.stack_a = ft_calloc(argc, sizeof(int));

	ctrl_argv(argv, &data);

	int i = 0;
	int stack_a[argc];
	int stack_b[argc];

	ft_bzero(stack_a, sizeof(stack_a));
	ft_bzero(stack_b, sizeof(stack_b));

	char **tomate = argv;

	stack_a[0] = 32;
	stack_a[1] = 42;
	data.stack_a[0] = 66;
	data.stack_a[1] = 33;

	t_ps ps;

	ps.len = argc;
	ps.stack_a = stack_a;
	ps.stack_b = stack_b;

	(void)tomate;

	while (data.stack_a[i])
	{
		ft_printf(GREEN " a:%d\n", ps.stack_a[i]);
		ft_printf(BLUE " a:%d\n", data.stack_a[i]);
		ft_printf(YELLOW " b:%d\n", ps.stack_b[i]);
		i++;
	}
	ft_printf(RED "%s\n", TOMATE);
}
