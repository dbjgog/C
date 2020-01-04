/*
例6.4 将一个二维数组行和列的元素互换，存到另外一个二位数组中。
例如：
a = |1 2 3| b = |1 4|
    |4 5 6|     |2 5|
                |3 6|
*/

#include<iostream>
using namespace std;
int main()
{
    int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int b[3][2], i, j;
    printf("array a :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", a[i][j]);
            b[j][i] = a[i][j];//重点
        }
        printf("\n");
    }
    
    printf("array b :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++) printf("%5d", b[i][j]);
        printf("\n");
    }
    return 0;
}