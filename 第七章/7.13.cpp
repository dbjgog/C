/*
多维数组名作为函数的参数时，可以指定每一维的大小，也可以省略第一维的大小说明。
但是不能把第2维以及其他高维的大小说明省略。
理由：二维数组是由若干个一维数组组成的，在内存中，数组是按行存放的，必须指定列数。
*/

/*
例7.13 有一个3*4的矩阵，求所有矩阵元素中的最大值。
*/

#include<stdio.h>
int main()
{
	int max_value(int arrar[][4]);
	
	int a[3][4] = {{1,3,5,7},{2,4,6,8},{15,17,34,12}};
	
	printf("Max value is %d\n", max_value(a));	
	return 0;
}

int max_value(int array[][4])
{
	int i, j, max;
	max = array[0][0];
	for(i = 0; i < 3; i++)
		for(j = 0; j < 4; j++)
		{
			if(max < array[i][j]) 
				max = array[i][j];
		}
	return (max);
}