#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define CHUNKS 8
#define SIZE 140

enum
{
	START,
	MIDDLE,
	END,
};

void	print_chunk(int n, int chunk[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("START: %d\n", chunk[i][START]);
		printf("MIDDLE: %d\n", chunk[i][MIDDLE]);
		printf("END: %d\n", chunk[i][END]);
		i++;
	}
}

int	main(int argc, char **str)
{
	int	chunk[8][3];
	int	i;

	i = 0;
	while (i < CHUNKS)
	{
		if (i == CHUNKS - 1)
		{
			chunk[CHUNKS - 1][START] = round(i * (SIZE / (float)CHUNKS));
			chunk[CHUNKS - 1][END] = SIZE;
			chunk[i][MIDDLE] = round((chunk[i][START] + chunk[i][END]) / 2.0);
		}
		else
		{
			chunk[i][START] = round(i * (SIZE / (float)CHUNKS));
			chunk[i][END] = round((i + 1) * (SIZE / (float)CHUNKS));
			chunk[i][MIDDLE] = round((chunk[i][START] + chunk[i][END]) / 2.0);
		}
		i++;
	}
	print_chunk(CHUNKS, chunk);
	return (0);
}
