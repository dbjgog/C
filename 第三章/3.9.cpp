/*
例3.9 从键盘输入BOY3个字符，然后把它们输出到屏幕上。
*/

#include<stdio.h>
int main()
{
	char a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;	
} 

//另外一种写法
/*
#include<stdio.h>
int main()
{
	putchar(getchar());
	putchar(getchar());
	putchar(getchar());
	return 0;	
} 
*/ 
