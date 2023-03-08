#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/inc/libft.h"
#include "../libft/inc/colors.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/error.h"

#define ERROR_1 "Error: Argument is not an integer"
#define ERROR_2 "Error: Duplicate numbers"
#define ERROR_3 "Error: Numbers greater than integer"

typedef struct s_ps
{
	int len;
	int *stack_a;
	int *stack_b;
} t_ps;

void add_num(t_ps *data, char **n);
void ctrl_num(int len, char **str);
void ctrl_num_dupl(t_ps *data);

void swap(int *a, int *b);
void sa(t_ps *data);
void sb(t_ps *data);
void ss(t_ps *data);

#endif
