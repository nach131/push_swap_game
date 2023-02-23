#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/inc/libft.h"
#include "../libft/inc/colors.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/error.h"

#define TOMATE "Test define"

typedef struct s_ps
{
	int len;
	int *stack_a;
	int *stack_b;
} t_ps;

void ctrl_argv(int len, char **ch);

#endif
