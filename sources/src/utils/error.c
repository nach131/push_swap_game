#include "push_swap.h"

void ctrl_argv(int len, char **ch)
{
	int i = 1;

	while (i <= len)
	{
		ft_printf(RED " Sw:%s\n", ch[i]);
		i++;
	}
}
