#include <stdio.h>
#include <stdlib.h>

#define START 0
#define END 1
#define MIDDLE 2

typedef struct s_data
{
	int	size;
	int	**chunk;
	int	*tp;
}		t_data;

void	init_chunk_b(t_data *data, int n)
{
	int	i;

	data->chunk = calloc(n, sizeof(int *));
	i = 0;
	while (i < n)
	{
		data->chunk[i] = calloc(3, sizeof(int));
		i++;
	}
}

void	chunk_b(t_data *data, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (i == n - 1)
		{
			data->chunk[n - 1][START] = (i)*data->size / n;
			data->chunk[n - 1][END] = data->size;
			data->chunk[i][MIDDLE] = (data->chunk[i][START]
					+ data->chunk[i][END]) / 2;
		}
		else
		{
			data->chunk[i][START] = (i) * (data->size / n);
			data->chunk[i][END] = (i + 1) * (data->size / n);
			data->chunk[i][MIDDLE] = (data->chunk[i][START]
					+ data->chunk[i][END]) / 2;
		}
		i++;
	}
}

int	main(int argc, char **str)
{
	int		i;
	t_data	data;
	int		size;
	int		n;
	int		num;

	size = 100;
	n = 3;
	num = 43;
	init_chunk_b(&data, n);
	chunk_b(&data, n);
	for (i = 0; i < n; i++)
	{
		if (num >= data.chunk[i][START] && num < data.chunk[i][END])
		{
			printf("El número %d está en el chunk %d\n", num, i);
			break ;
		}
	}
	if (i == n)
	{
		printf("El número %d no está en ningún chunk\n", num);
	}
	return (0);
}
