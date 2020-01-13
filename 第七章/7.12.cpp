/*
例7.12 用选择法对数组中10个整数按由小到大排序。
*/

/*
所谓选择法就是先将10个数中最小的数与a[10]对换；
再将a[1]~a[9]中国最小的数与a[1]对换……
每比较一轮，找出一个未尽排序的数中最小的一个。共比较9轮。
*/

#include<stdio.h>
int main()
{
	void sort(int array[], int n);
	int a[10], i;
	printf("enter array:\n");
	for(i = 0; i < 10; i++) scanf("%d", &a[i]);
	sort(a, 10);
	printf("The sorted array:\n");
	for(i = 0; i < 10; i++) printf("%d ", a[i]);
	printf("\n");
	return 0;
}

void sort(int array[], int n)
{
	int i, j, k, t;
	for(i = 0; i < n-1; i++)
	{
		k = i;
		for(j = i+1; j < n; j++) if(array[j] < array[k]) k = j;
		t = array[k];
		array[k] = array[i];
		array[i] = t;
	}
}

