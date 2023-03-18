#include "../../sources/libft/inc/colors.h"
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

// ARRAY INVERSO

typedef struct s_num
{
	int num;
	int index;
} t_num;

typedef struct s_ps
{
	t_num *stack;
	int top;
} t_ps;

typedef struct s_data
{
	int size;
	int *tp;
	t_ps a;
	t_ps b;
} t_data;

void pa(t_data *data)
{
	if (data->b.top >= 0)
	{
		data->a.top++;
		int i = data->a.top;
		while (i >= 0)
		{
			// data->a.stack[i] = data->a.stack[i - 1];
			int num = data->a.stack[i - 1].num;
			data->a.stack[i].num = num;
			// data->a.stack[i].index = -1;
			// printf(RED "%d:%d\n", data->a.stack[i], i);
			i--;
		}
		data->a.stack[0].num = data->b.stack[0].num;
		i = 0;
		while (i <= data->b.top - 1)
		{
			int num = data->b.stack[i + 1].num;
			data->b.stack[i].num = num;
			// printf(RED "%d:%d\n", data->b.stack[i].num, i);
			i++;
		}
		data->b.top--;
	}
}

void pb(t_data *data)
{
	// Si stack A está vacío, no se puede realizar la operación pb.
	if (data->a.top == -1)
	{
		return;
	}
	// Tomar el primer elemento del stack A y ponerlo en el top del stack B.
	int num = data->a.stack[data->a.top].num;
	int index = data->a.stack[data->a.top].index;
	data->b.top++;
	data->b.stack[data->b.top].num = num;
	data->b.stack[data->b.top].index = index;
	data->a.top--;
}

void add_num(t_ps *stack, int arr[])
{
	int j = 0;
	while (j <= SIZE - 1)
	{
		stack->stack[j].num = arr[j];
		stack->top++;
		j++;
	}
}

void print_stack(t_ps stack)
{
	int i = 0;
	while (i <= stack.top)
	{
		printf(YELLOW "%d:%d, tb:%d\n", stack.stack[i].num, i, stack.stack[i].index);
		i++;
	}
}

int main(void)
{
	t_data data;
	data.a.stack = calloc(SIZE, sizeof(t_num));
	data.b.stack = calloc(SIZE, sizeof(t_num));
	data.a.top = -1;
	data.b.top = -1;
	int a[] = {30, 20, 10};
	int b[] = {33, 22, 11};

	add_num(&data.a, a);
	add_num(&data.b, b);

	pa(&data);
	pa(&data);
	// pa(&data);

	print_stack(data.a);
	printf("--B--\n");
	print_stack(data.b);
	// printf(ORANGE "--REAL--\n");

	// int i = 0;
	// while (i <= SIZE - 1)
	// {
	// 	printf("%d:%d\n", data.b.stack[i], i);
	// 	i++;
	// }

	return (0);
}

NO SE QUE PUEDE PASAR... ? ?

						   // 10:0, tb:0
						   // 33:1, tb:0
						   // 30:2, tb:0
						   // 20:3, tb:0
						   // 11:4, tb:0
						   // --B--
						   // 11:0, tb:0
