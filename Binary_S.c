#include <stdio.h>
#include <stdlib.h>

int Bin(const int a[], int n, int k)
{
	int pl = 0;
	int pr = n - 1;
	int pc;

	do
	{
		pc = (pl + pr) / 2;
		printf("center : %d\n",a[pc]);
		if (a[pc] == k)
			return pc;
		else if (a[pc] < k)
			pl = pc + 1;
		else
			pr = pc - 1;
	}while (pl <= pr);
	return -1;
}
int main(void)
{
	int i, nx, key, idx;
	int *x;

	puts("Binary Search\n");
	printf("Element Count : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	printf("Input Integers in ascending order.\n");
	printf("x[0] : ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do
		{
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}

	printf("Search Key : ");
	scanf("%d", &key);
	idx = Bin(x, nx, key);

	if (idx == -1)
		puts("Search Failed.");
	else
		printf("'%d' is located at 'x[%d]'.\n", key, idx);
}
