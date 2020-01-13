/*
（2）将外部变量地作用域扩展到其他文件
如果一个程序包含两个文件，在两个文件中都要用到同一个外部变量Num，
不能分别在两个文件中各自定义一个外部变量Num，否则在进行程序的连接时会出现“重复定义”的错误。
正确的做法是：在任一文件中定义外部变量Num，而在另外一个文件中用extern对Num作“外部变量声明”，
即“extern Num；”。在编译和连接时，系统会由此知道Num有“外部链接”，可以从别处找到已定义的外部
变量Num，并将在另一文件中定义外部变量Num的作用域扩展到本文件，在本文件中可以合法地引用外部变量Num。
*/

/*
例7.19 给定b的值，输入a和m，求a*b和a^m的值。
*/

//文件file1.c

#include<stdio.h>
int A;
int main()
{
	int power(int);
	int b = 3, c, d, m;
	printf("enter the number a and its power m :");
	scanf("%d %d", &A, &m);
	c = A*b;
	printf("%d*%d = %d\n", A, b, c);
	d = power(m);
	printf("%d**%d = %d\n", A, m, d);
	return 0;
}

//文件file2.c
/*
extern A;
int power(int n)
{
	int i, y = 1;
	for(i = 1; i <= n; i++) y *= A；
	return (y);
}
*/

