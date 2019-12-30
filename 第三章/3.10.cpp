/*
例3.3 给定一个大写字母，要求用小写字母输出。 
*/ 

/*
例3.10 改写例3.3程序，使之可以使用于任何大写字母。从键盘输入一个大写字母，在显示屏上显示对应的小写字母。
*/

#include<stdio.h>
int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');
	return 0;	
} 

//另外一种方法
/*
#include<stdio.h>
int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	printf("大写字母:%c\n 小写字母：%c\n", c1, c2);
	return 0;	
} 
*/
