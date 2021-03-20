#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int **ip;
        int row = 0;
        int culumn = 0;
        int i = 0, j = 0, k = 0;

        printf("Input Row : ");
        scanf("%d", &row);

        ip = (int**)calloc(row, sizeof(int)+1);

        printf("Input Culumn : ");
        scanf("%d", &culumn);

        for(i = 0; i < row; i++)
        {
                ip [i] =(int*)calloc(culumn, sizeof(int)+1);
        }
        for(i = 0; i < row; i++)
        {
                for(j = 0; j < culumn; j++)
                {
                        if(i == row - 1 && j == culumn - 2)
                        {
                                printf("ip[%d][%d] = 17110205 ", i ,j);
                        }
                        else if(i == row - 1 && j == culumn -1)
                        {
                                printf("ip[%d][%d] = SooYong-Jeong ", i, j);
                        }
                        else
                        {
                                ip[i][j] = k;
                                printf("ip[%d][%d] = %2d ",i, j, k);
                                k++;
                        }
		}
		printf("\n");
	}
	return 0;
}
