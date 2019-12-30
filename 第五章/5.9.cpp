/*
例5.9 输入一个大于3的整数n，判断它是否为素数（prime，又称质数）。
解题思路：采用的算法是，让n被i除（i的值从2变到n-1），如果n能被2~（n-1）之中任何一个整数整除，
则表示n肯定不是素数，不必在继续被后面的整数除，因此，可能提前结束循环。
注意：此时i的值必然小于n。 
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
//程序的改进
/*
其实n不必被2~（n-1）范围内的各整数去除，只须将n被2~n/2间的整数除即可，
甚至只须被2~sqrt（n）之间的整数除即可。
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

