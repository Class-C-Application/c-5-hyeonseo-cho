#include <stdio.h>


#define ROWSIZE 2
#define COLSIZE 3

int main(void)
{

	int td[ROWSIZE][COLSIZE];


	td[0][0] = 1;
	td[0][1] = 2;
	td[0][2] = 3;

	td[1][0] = 4;
	td[1][1] = 5;
	td[1][2] = 6;

	printf("반목문 for를 이용하여 출력\n");

	for (int i = 0; i < ROWSIZE; i++) // 행 반복
	{
		for (int j = 0; j < COLSIZE; j++) // 열 반복
		{
	
			printf("td[%d][%d] == %d ", i, j, td[i][j]);
		}
		
		printf("\n");
	}

	return 0;
}
