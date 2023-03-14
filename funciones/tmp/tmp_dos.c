#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct s_ps
{
	int *stack;
	int top;
} t_ps;

typedef struct s_data
{
	int size;
	int count;
	t_ps a;
	t_ps b;
} t_data;

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void push(int *stack, int *top, int value, int size)
{
	if (*top >= size + 1)
	{
		exit(1);
	}
	*top = *top + 1;
	stack[*top] = value;
}

void sa(t_data *data)
{
	if (data->a.top > 0)
		swap(&data->a.stack[0], &data->a.stack[1]);
	data->count++;
}

void sb(t_data *data)
{
	if (data->b.top > 0)
		swap(&data->b.stack[0], &data->b.stack[1]);
	data->count++;
}

void ss(t_data *data)
{
	sa(data);
	sb(data);
}

void ra(t_data *data)
{
	int i;

	int first;
	i = 0;
	if (data->a.top > 0)
	{
		first = data->a.stack[0];
		while (i <= data->a.top)
		{
			swap(&data->a.stack[i], &data->a.stack[i + 1]);
			i++;
		}
		swap(&first, &data->a.stack[data->a.top]);
	}
	data->count++;
}

void rb(t_data *data)
{
	int i;

	int first;
	i = 0;
	if (data->b.top > 0)
	{
		first = data->b.stack[0];
		while (i <= data->b.top)
		{
			swap(&data->b.stack[i], &data->b.stack[i + 1]);
			i++;
		}
		swap(&first, &data->b.stack[data->b.top]);
	}
	data->count++;
}

void rr(t_data *data)
{
	ra(data);
	rb(data);
}

void pa(t_data *data)
{
	int i;
	if (data->b.top >= 0)
	{
		if (data->a.top >= 0)
		{
			data->a.top++;
			i = data->a.top - 1;
			while (i >= 0)
			{
				swap(&data->a.stack[i], &data->a.stack[i + 1]);
				i--;
			}
			swap(&data->b.stack[0], &data->a.stack[0]);
		}
		else
			push(data->a.stack, &data->a.top, data->b.stack[0], data->size);
		rb(data);
		data->b.top--;
	}
	data->count++;
}

void pb(t_data *data)
{
	int i;
	if (data->a.top >= 0)
	{
		if (data->b.top >= 0)
		{
			data->b.top++;
			i = data->b.top - 1;
			while (i >= 0)
			{
				swap(&data->b.stack[i], &data->b.stack[i + 1]);
				i--;
			}
			swap(&data->a.stack[0], &data->b.stack[0]);
		}
		else
			push(data->b.stack, &data->b.top, data->a.stack[0], data->size);
		ra(data);
		data->a.top--;
	}
	data->count++;
}

void rra(t_data *data)
{
	int i;

	int last;
	i = data->a.top - 1;
	if (data->a.top > 0)
	{
		last = data->a.stack[data->a.top];
		while (i >= 0)
		{
			swap(&data->a.stack[i], &data->a.stack[i + 1]);
			i--;
		}
		swap(&last, &data->a.stack[0]);
	}
	data->count++;
}

void rrb(t_data *data)
{
	int i;

	int last;
	i = data->b.top - 1;
	if (data->b.top > 0)
	{
		last = data->b.stack[data->b.top];
		while (i >= 0)
		{
			swap(&data->b.stack[i], &data->b.stack[i + 1]);
			i--;
		}
		swap(&last, &data->b.stack[0]);
	}
	data->count++;
}

void rrr(t_data *data)
{
	rra(data);
	rrb(data);
}

void print_stack(t_ps stack)
{
	int i = 0;

	while (i <= stack.top)
	{
		printf("%d :%d\n", stack.stack[i], i);
		i++;
	}
}

void sort_stack(t_data *data)
{
	int min, max;
	min = data->a.top;
	max = data->a.top;
	for (int i = 0; i <= data->a.top; i++)
	{
		if (data->a.stack[i] < data->a.stack[min])
			min = i;
		if (data->a.stack[i] > data->a.stack[max])
			max = i;
	}
	if (min == 0 && max == data->a.top)
	{
		pb(data);
		sort_stack(data);
		pa(data);
	}
	else if (min == 0)
	{
		ra(data);
		pb(data);
		sort_stack(data);
		pa(data);
	}
	else if (max == data->a.top)
	{
		rra(data);
		pb(data);
		sort_stack(data);
		pa(data);
	}
	else
	{
		int rotations = 0;
		while (data->a.stack[0] != data->a.stack[min])
		{
			ra(data);
			rotations++;
		}
		pb(data);
		sort_stack(data);
		pa(data);
		for (int i = 0; i < rotations; i++)
			rra(data);
	}
}

void add_num(t_data *data)
{
	int i;

	int a[] = {85, 108, 91, 46, 93, 105, 6, 26, 24, 28, 7, 44, 83, 106, 96, 104, 84, 40, 41, 79, 73, 67, 99, 71, 57, 87, 107, 86, 10, 59, 5, 13, 20, 76, 50, 34, 98, 75, 80, 53, 48, 19, 45, 17, 62, 95, 72, 30, 68, 33, 55, 69, 1, 65, 81, 29, 49, 97, 16, 27, 94, 103, 8, 77, 14, 78, 32, 52, 25, 54, 21, 12, 36, 74, 66, 101, 18, 82, 89, 23, 2, 109, 3, 11, 70, 47, 102, 92, 42, 37, 88, 35, 90, 15, 9, 100, 60, 22, 43, 63};

	i = 0;
	while (i < data->size)
	{
		push(data->a.stack, &data->a.top, a[i], data->size);
		i++;
	}
}

int main(void)
{
	t_data data;
	data.size = SIZE;
	data.a.stack = calloc(data.size, sizeof(int));
	data.b.stack = calloc(data.size, sizeof(int));
	data.a.top = -1;
	data.b.top = -1;

	add_num(&data);

	print_stack(data.a);
	printf("\n");
	sort_stack(&data);
	print_stack(data.a);
	printf("%d\n", data.count);
	return (0);
}

// Quicksort
// Colocar el item mas pequeño de A y poner lo en B, asi hasta que quede vacio

// void sort_stack(t_data *data)
// {
//     int min, max;
//     min = data->a.top;
//     max = data->a.top;
//     for (int i = 0; i <= data->a.top; i++)
//     {
//         if (data->a.stack[i] < data->a.stack[min])
//             min = i;
//         if (data->a.stack[i] > data->a.stack[max])
//             max = i;
//     }
//     if (min == 0 && max == data->a.top)
//     {
//         pb(data);
//         sort_stack(data);
//         pa(data);
//     }
//     else if (min == 0)
//     {
//         ra(data);
//         pb(data);
//         sort_stack(data);
//         pa(data);
//     }
//     else if (max == data->a.top)
//     {
//         rra(data);
//         pb(data);
//         sort_stack(data);
//         pa(data);
//     }
//     else
//     {
//         int rotations = 0;
//         while (data->a.stack[0] != data->a.stack[min])
//         {
//             ra(data);
//             rotations++;
//         }
//         pb(data);
//         sort_stack(data);
//         pa(data);
//         for (int i = 0; i < rotations; i++)
//             rra(data);
//     }
// }
