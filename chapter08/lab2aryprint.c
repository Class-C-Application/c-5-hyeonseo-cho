#include <stdio.h>

int main()
{
    
    int a[3][4] = {
        {1, 2, 7, 3}, // 0행
        {5, 6, 3, 4}, // 1행
        {9, 7, 1, 8}  // 2행
    };

    printf("%6s %3s  ", "원소", "값");
    printf("%6s %3s  ", "원소", "값");
    printf("%6s %3s  ", "원소", "값");
    printf("%6s %3s\n", "원소", "값");
    printf("------------------------------------------------\n");
    for (int i = 0; i < 3; i++) // 행(row) 반복
    {
        for (int j = 0; j < 4; j++) // 열(column) 반복
        {
            printf(" a[%d][%d] %d  ", i, j, a[i][j]);
        }
        puts("");
    }

    return 0;
}
