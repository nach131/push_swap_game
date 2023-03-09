/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_js.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:51:04 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/09 13:55:19 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX_STACK_SIZE 1000

int stack_a[MAX_STACK_SIZE];
int stack_b[MAX_STACK_SIZE];
int top_a = -1;
int top_b = -1;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// OK
void push(int *stack, int *top, int value)
{
	if (*top >= MAX_STACK_SIZE - 1)
	{
		printf("Error: Stack overflow\n"); // FALTA
		return;
	}
	*top = *top + 1;
	stack[*top] = value;
}

int pop(int *stack, int *top)
{
	if (*top == -1)
	{
		printf("Error: Stack underflow\n");
		return -1;
	}
	int value = stack[*top];
	*top = *top - 1;
	return value;
}

// OK
void sa()
{
	if (top_a > 0)
	{
		swap(&stack_a[top_a], &stack_a[top_a - 1]);
	}
}
// OK
void sb()
{
	if (top_b > 0)
	{
		swap(&stack_b[top_b], &stack_b[top_b - 1]);
	}
}
// OK
void ss()
{
	sa();
	sb();
}

void pa()
{
	if (top_b >= 0)
	{
		int value = pop(stack_b, &top_b);
		push(stack_a, &top_a, value);
	}
}
// OK
void pb()
{
	if (top_a >= 0)
	{
		// int value = pop(stack_a, &top_a);
		push(stack_b, &top_b, stack_a[0]);
	}
}

// OK
void ra()
{
	if (top_a > 0)
	{
		int value = pop(stack_a, &top_a);
		push(stack_a, &top_a, value);
	}
}

void rb()
{
	if (top_b > 0)
	{
		int value = pop(stack_b, &top_b);
		push(stack_b, &top_b, value);
	}
}

void rr()
{
	ra();
	rb();
}

void rra()
{
	if (top_a > 0)
	{
		int value = pop(stack_a, &top_a);
		int temp_top = top_a;
		while (temp_top >= 0)
		{
			push(stack_a, &temp_top, pop(stack_a, &temp_top));
		}
		push(stack_a, &top_a, value);
	}
}

void rrb()
{
	if (top_b > 0)
	{
		int value = pop(stack_b, &top_b);
		int temp_top = top_b;
		while (temp_top >= 0)
		{
			push(stack_b, &temp_top, pop(stack_b, &temp_top));
		}
		push(stack_b, &top_b, value);
	}
}

void rrr()
{
	rra();
	rrb();
}

int is_sorted(int stack_a[], int top_a)
{
	for (int i = 0; i < top_a - 1; i++)
	{
		if (stack_a[i] > stack_a[i + 1])
		{
			return 0; // el stack a no está ordenado
		}
	}
	return 1; // el stack a está ordenado
}
#include <stdio.h>

int main()
{
	// Insertar números en el stack a

	push(stack_a, &top_a, 3);
	push(stack_a, &top_a, 1);
	push(stack_a, &top_a, 4);
	push(stack_a, &top_a, 2);

	int i = 0;
	while (i < 4)
	{
		printf("%d\n", stack_a[i]);
		i++;
	}
	printf("--Despues--\n");
	// Ejecutar operaciones de ordenamiento
	ra();

	//===========================================================================================

	i = 0;
	while (i < 4)
	{
		printf("%d\n", stack_a[i]);
		i++;
	}
	if (is_sorted(stack_a, top_a))
	{
		printf("El stack a está ordenado\n");
	}
	else
	{
		printf("El stack a no está ordenado\n");
	}
	if (top_b == -1)
	{
		printf("El stack b está vacío\n");
	}
	else
	{
		printf("El stack b no está vacío\n");
		i = 0;
		while (i < 4)
		{
			printf("%d\n", stack_b[i]);
			i++;
		}
	}
	return 0;
}
