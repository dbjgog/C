/*
��5.9 ����һ������3������n���ж����Ƿ�Ϊ������prime���ֳ���������
����˼·�����õ��㷨�ǣ���n��i����i��ֵ��2�䵽n-1�������n�ܱ�2~��n-1��֮���κ�һ������������
���ʾn�϶����������������ڼ��������������������ˣ�������ǰ����ѭ����
ע�⣺��ʱi��ֵ��ȻС��n�� 
*/ 

/* 
#include<stdio.h>
int main()
{
	int n, i;
	printf("please enter a integer number, n=?");
	scanf("%d", &n);
	for(i=2; i<=n-1; i++)
		if(n%i == 0)break;
	if(i<n) printf("%d is not a prime number.\n", n);
	else printf("%d is a prime number.\n", n);
	return 0;
} 
*/
//����ĸĽ�
/*
��ʵn���ر�2~��n-1����Χ�ڵĸ�����ȥ����ֻ�뽫n��2~n/2������������ɣ�
����ֻ�뱻2~sqrt��n��֮������������ɡ�
*/ 

#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, k;
	printf("please enter a integer number:n=?");
	scanf("%d", &n);
	k = sqrt(n);
	for(i=2; i<=k; i++)
		if(n%i == 0)break;
	if(i <= k)printf("%d is not a prime number.\n", n);
	else printf("%d is a prime number.\n", n);
	return 0;
}

