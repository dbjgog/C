//用数组元素做实参时，向形参变量传递的是数组元素的值，
//而用数组名做函数实参时，向形参（数组名或指针变量）传递的是数组首元素的地址

/*
例7.10 有一个一维数组score，内放10个学生的成绩，求平均成绩。
*/

#include<stdio.h>
int main()
{
	float average(float array[]);
	float score[10], aver;
	int i;
	printf("input 10 scores:");
	for(i = 0; i < 10; i++) scanf("%f", &score[i]);
	printf("\n");
	aver = average(score);
	printf("average score is %5.2f\n", aver);
	return 0;
}

float average(float array[])
{
	int i;
	float aver, sum = array[0];
	for(i = 1; i < 10; i++) sum = sum + array[i];
	aver = sum/10;
	return(aver);
}
