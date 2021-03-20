#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ip;
	int row = 0;
	int i = 0;

	printf("Input Row : ");
	scanf("%d", &row);

	ip = calloc(row, sizeof(int));

	for(i=0; i<row; i++)
	{
		ip[i] = (i+1)*2;
		printf("ip[%d] = %d\n", i, ip[i]);
	}
	free(ip);
	return 0;
}
