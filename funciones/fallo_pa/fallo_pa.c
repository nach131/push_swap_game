#include "../../sources/libft/inc/colors.h"
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

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
	// Si stack B está vacío, no se puede realizar la operación pa.
	if (data->b.top == -1)
	{
		return;
	}
	// Tomar el primer elemento del stack B y ponerlo en el top del stack A.
	int num = data->b.stack[data->b.top].num;
	int index = data->b.stack[data->b.top].index;
	data->a.top++;
	data->a.stack[data->a.top].num = num;
	data->a.stack[data->a.top].index = index;
	data->b.top--;
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
	int i = SIZE - 1;
	int j = 0;
	while (j <= SIZE - 1)
	{
		stack->stack[i].num = arr[j];
		stack->top++;
		j++;
		i--;
	}
}

void print_stack(t_ps stack)
{
	int i = stack.top;

	while (i >= 0)
	{
		printf(YELLOW "%d:%d, tb:%d\n", stack.stack[i].num, i, stack.stack[i].index);
		i--;
	}
}

int main(void)
{
	t_data data;
	data.a.stack = calloc(SIZE, sizeof(t_num));
	data.b.stack = calloc(SIZE, sizeof(t_num));
	data.a.top = -1;
	data.b.top = -1;
	int a[] = {3, 2, 1};
	int b[] = {30, 20, 10};

	add_num(&data.a, a);
	add_num(&data.b, b);

	pa(&data);
	pa(&data);

	print_stack(data.a);
	printf("--B--\n");
	print_stack(data.b);
	printf(ORANGE "--REAL--\n");

	int i = SIZE - 1;
	while (i >= 0)
	{
		printf("%d:%d\n", data.b.stack[i].num, i);
		i--;
	}

	return (0);
}

// 20:4, tb:0
// 30:3, tb:0
// 3:2, tb:0
// 2:1, tb:0
// 1:0, tb:0
// --B--
// 20:0, tb:0 // ---> se cambia no se por que
// --REAL--
// 30:2
// 20:1
// 20:0

// // Toma el primer elemento del stack A y lo pone encima del stack B.
// // No hace nada si A está vacío.
// void pb(t_data *data)
// {
//     if (data->a.top >= 0) // si el stack A no está vacío
//     {
//         // sacamos el elemento del stack A y lo ponemos en el stack B
//         data->b.top++;
//         data->b.stack[data->b.top] = data->a.stack[data->a.top];
//         data->a.top--;
//     }
// }

// // Toma el primer elemento del stack B y lo pone encima del stack A.
// // No hace nada si B está vacío.
// void pa(t_data *data)
// {
//     if (data->b.top >= 0) // si el stack B no está vacío
//     {
//         // sacamos el elemento del stack B y lo ponemos en el stack A
//         data->a.top++;
//         data->a.stack[data->a.top] = data->b.stack[data->b.top];
//         data->b.top--;
//     }
// }
