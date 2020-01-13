/*
变量的作用域：局部变量，全部变量。
每一个变量都有一个作用域问题，即它们在什么范围内有效。
定义变量：
（1）在函数的开头定义；
（2）在函数内的复合语句内定义；
（3）在函数的外部定义。

形式参数也是局部变量。
复合语句（分程序或程序块）。
在函数之外定义的变量称为外部变量，外部变量是全局变量。
当全局变量和局部变量相同名时，局部变量会把全局变量屏蔽。

为了便于区分全局变量和局部变量，在C程序中有一个习惯（但非规定），
将全局变量名的第1个字母用大写表示。
*/

/*
例7.14 有一个一维数组，内放10个学生成绩，写一个函数，
当主函数调用此函数后，能求出平均分、最高分和最低分。
*/

#include<stdio.h>
float Max = 0, Min = 0;
int main()
{
	float average(float array[], int n);
	float ave, score[10];
	int i;
	printf("Please enter 10 scores:");
	for(i = 0; i < 10; i++) scanf("%f", &score[i]);

	ave = average(score, 10);

	printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, ave);
	return 0;
}

float average(float array[], int n)
{
	int i;
	float aver, sum = array[0];
	Max = array[0];
	Min = array[0];
	for(i = 1; i < 10; i++)
	{
		if(array[i] > Max) Max = array[i];
		else if(array[i] < Min) Min = array[i];
		sum = sum + array[i];
	}
	aver = sum / n;
	return (aver);
}
