/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:44:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/07 09:55:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdlib.h>

void add_num(t_ps *data, char **n)
{
	int i = 1;
	int j = 0;
	while (i <= data->len)
	{
		if (*n[i] >= '0' && *n[i] <= '9')
		{
			data->stack_a[j] = ft_atoi(n[j + 1]);
			data->stack_b[j] = atoi(n[j + 1]);
		}
		else
		{
			ft_message(DANGER, ERROR_1);
			exit(1);
		}
		i++;
		j++;
	}
}
