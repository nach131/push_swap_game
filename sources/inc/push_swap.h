#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/inc/libft.h"
#include "../libft/inc/colors.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/error.h"

#define ERROR_1 "Error: Argument is not an integer"
#define ERROR_2 "Error: Duplicate numbers"
#define ERROR_3 "Error: Numbers greater than integer"
#define ERROR_4 "Error: Stack overflow"
#define ERROR_5 "Error: Stack underflow"
#define INFO_1 "Info: It's already sorted"

// typedef struct s_ps
// {
// 	int len;
// 	int *stack_a;
// 	int *stack_b;
// } t_ps;

typedef struct s_ps
{
	int *stack;
	int top;
} t_ps;

typedef struct s_data
{
	int size;
	t_ps a;
	t_ps b;
} t_data;

void add_num(t_data *data, char **n);
void ctrl_num(int len, char **str);
// void init_data(t_data *data, int len);
void ctrl_num_dupl(t_data *data);
void ctrl_sorted(t_data *data);

void selection(t_data *data);

void push(int *stack, int *top, int value, int size);
void swap(int *a, int *b);
void sa(t_data *data);
void sb(t_data *data);
void ss(t_data *data);
void pa(t_data *data);
void pb(t_data *data);
void ra(t_data *data);
void rb(t_data *data);
void rr(t_data *data);
void rra(t_data *data);
void rrb(t_data *data);
void rrr(t_data *data);

void order_three(t_data *data);
void quickSort(int arr[], int low, int high);

#endif
