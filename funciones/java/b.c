/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

  #include <stdio.h>

void print(int *n)
{
	int i = 0;
	while(i <= 4)
	
	{
		printf("%d\n",n[i]);
		i++;
	}
}

int	main(void)
{

//int a[] = {1, 2, 3, 4, 5};
//
//print(a);
//int temp = a[4];
//int i = 3;
//while (i >= 4) {
//	a[i+1] = a[i];
//    i--;
//}
//a[0] = temp;
//
int a[] = {1, 2, 3, 4, 5};
int temp = a[4];
int i = 3;

while (i >= 0) {
    a[i+1] = a[i];
    i--;
}

a[0] = temp;


printf("--\n");
print(a);
}

