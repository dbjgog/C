/*
例4.8 写一程序，判断某一年是否为闰年。
闰年满足下面二者之一：
（1）能被4整除，但不能被100整除。
（2）能被400整除。
*/

#include<stdio.h>
int main()
{
	int year, leap;
	printf("enter year:");
	scanf("%d", &year);
	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0) leap = 1;
			else leap = 0;	
		}
		else leap = 1;
	}
	else leap = 0;
	if(leap) printf("%d is ", year);
	else printf("%d is not ", year);
	printf("a leap year.\n");
	return 0;	
} 
