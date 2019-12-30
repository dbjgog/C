/*
例4.7 用switch语句处理菜单命令。在许多应用程序中，用菜单对流程进行控制，
例如从键盘输入一个'A'或'a'字符，就会执行A操作，输入一个'B'或'b'字符，就会执行B操作。
*/

#include<stdio.h>
int main()
{
	void action1(int, int), action2(int, int);
	char ch;
	int a = 15, b = 23;
	ch = getchar();
	switch(ch)
	{
		case'a':
		case'A':action1(a,b);break;
		case'b':
		case'B':action2(a,b);break;
		default:putchar('\a');
	}
	return 0;
} 

void action1(int x, int y)
{
	printf("x+y=%d\n", x+y);
}

void action2(int x, int y)
{
	printf("x*y=%d\n", x*y);
}
