/*
例6.3 有10个地区的面积，要求对它们按由小到大的顺序排序。
*/
//冒泡法或冒泡法

#include<iostream>
int main()
{
	int a[10];
	int i, j, t;
	printf("input 10 numbers :\n");
	for (i = 0; i < 10; i++) std::cin >> a[i];

	for (j = 0; j < 9; j++)//进行9次循环
		for (i = 0; i < 9 - j; i++)//在每次循环中进行9-j次比较
			if (a[i] > a[i + 1])
			{
				//交换
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	printf("the sorted numbers :\n");
	for (i = 0; i < 10; i++) printf("%d ", a[i]);
	printf("\n");
	return 0;
}
