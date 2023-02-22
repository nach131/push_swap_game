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
	int arr[argc];

	while (i < argc)
	{
		ft_max_min(ft_atoi(argv[i]));
		ft_printf(GREEN "%d\n", ft_atoi(argv[i]));
		i++;
	}
	ft_printf(RED "%s\n", TOMATE);
}
