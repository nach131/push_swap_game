/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:29:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/22 20:18:42 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void sort_hundred(t_stack **a, t_stack **b, t_data *data)
{
	(void)a;
	(void)b;
	ft_bzero(data->tp, data->size * sizeof(int));

	int one = data->size / 3;
	int two = 2 * (data->size / 3);
	// int three = 3 * (data->size / 3);
	int three = data->size;

	int md_one = one / 2;
	int md_two = (one + two) / 2;
	int md_three = (two + three) / 2;

	printf(YELLOW "\t1/3/2: %d\n", md_one);
	printf(MAGENTA "1/3: %d\n", one);
	printf(YELLOW "\t2/3/2: %d\n", md_two);
	printf(MAGENTA "2/3: %d\n", two);
	printf(YELLOW "\t3/3/2: %d\n", md_three);
	printf(MAGENTA "3/3: %d\n", three);

	if (((*a)->index <= data->size / 3))
		printf("SI\n");
	else
		printf("Mas grade\n");

	// print_tp(data);
}

// (void)a;
// 	(void)b;
// 	ft_bzero(data->tp, data->size * sizeof(int));
// 	// printf(RED "%d\n", first_inx(*b));

// 	int one = data->size / 3;
// 	int two = 2 * (data->size / 3);
// 	int three = 3 * (data->size / 3);

// 	int md_one = one / 2;
// 	int md_two = (one + two) / 2;
// 	int md_three = (two + three) / 2;

// 	printf(MAGENTA "1/3: %d\n", one);
// 	printf(YELLOW "\t1/3/2: %d\n", md_one);
// 	printf(MAGENTA "2/3: %d\n", two);
// 	printf(YELLOW "\t2/3/2: %d\n", md_two);
// 	printf(MAGENTA "3/3: %d\n", three);
// 	printf(YELLOW "\t3/3/2: %d\n", md_three);
// 	if (((*a)->index <= data->size / 3))
// 		printf("SI\n");
// 	else
// 		printf("Mas grade\n");
