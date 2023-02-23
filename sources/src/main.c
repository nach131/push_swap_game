#include "push_swap.h"

// void ft_max_min(int n)
// {
// 	int min = -1;
// 	int max = 1;

// 	if (n > max)
// 		max = n;
// 	else if (n < min)
// 		min = n;
// }

int main(int argc, char *argv[])
{

	int i = 1;
	int stack_a[argc];
	int stack_b[argc];

	ft_bzero(stack_a, sizeof(stack_a));
	ft_bzero(stack_b, sizeof(stack_b));

	char **tomate = argv;

	t_ps ps;

	ps.len = argc;
	ps.stack_a = stack_a;
	ps.stack_b = stack_b;

	(void)tomate;

	while (i < argc)
	{
		// ft_max_min(ft_atoi(argv[i]));
		// ft_printf(GREEN " %d\n", ft_atoi(argv[i]));
		ft_printf(GREEN " a:%d\n", ps.stack_a[i]);
		ft_printf(YELLOW " b:%d\n", ps.stack_b[i]);
		i++;
	}
	ft_printf(RED "%s\n", TOMATE);
}
