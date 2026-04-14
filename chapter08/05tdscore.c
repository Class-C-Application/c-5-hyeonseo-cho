#include <stdio.h>

// ROWSIZE라는 이름으로 정수 4를, COLSIZE라는 이름으로 정수 2를 나타내는 매크로 상수를 정의하세요
#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	// 합계, 중간 합계, 기말 합계를 저장할 int형 변수 sum, midsum, finalsum을 0으로 초기화하세요
	int sum = 0, midsum = 0, finalsum = 0;

	// 2차원 배열 초기화
	// 열 크기가 COLSIZE인 int형 2차원 배열 score를 { 95, 85, 90, 88, 86, 90, 88, 78 }로 초기화하세요
	int score[ROWSIZE][COLSIZE] = { 95, 85, 90, 88, 86, 90, 88, 78 };

	printf("         중간       기말\n");
	printf("    --------------------\n");

	// ROWSIZE x COLSIZE를 순회하는 중첩 for문을 작성하세요
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
		{
			// 각 원소를 printf("%10d ", score[i][j]); 형식으로 출력하고 sum에 누적하세요
			printf("%10d ", score[i][j]);
			sum += score[i][j];

			// j == 0이면 midsum에, 아니면 finalsum에 누적하세요
			if (j == 0)
			{
				midsum += score[i][j];
			}
			else
			{
				finalsum += score[i][j];
			}
		}
		// 각 행 출력 후 puts(""); 으로 줄바꿈하세요
		puts("");
	}

	printf("    --------------------\n");
	printf("평균: %10.2f %10.2f\n", (double)midsum / ROWSIZE, (double)finalsum / ROWSIZE);
	printf("\n성적의 합은 %d이고 ", sum);
	printf("평
