#include "push_swap.h"

// PASAR TODOS A NUMERO
//  argumentos superiores a un int, SALIR
//  argumentos que no son entero SALIR

// segunda funcion
// encontrar números duplicado SALILR

void ctrl_argv(char **ch, t_ps *data)
{
	int i = 1;

	while (i <= data->len)
	{
		ft_printf(RED " Sw:%s\n", ch[i]);
		i++;
	}
}

