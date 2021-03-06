//变量的存储方式和生存期

/*
变量的存储方式有两种不同的方式：静态存储方式和动态存储方式。
静态存储方式：在程序运行期间由系统分配固定的存储空间的方式。
动态存储方式：在程序运行期间根据需要进行动态的分配存储空间的方式。
*/

/*
内存中供用户使用的存储空间，分为3部分：程序区，静态存储区，动态存储区。
数据分别存放在静态存储区和动态存储区中。
全局变量全部存放在静态存储区。
在动态存储区中存放一下数据：
（1）函数形式参数。在调用函数时给形参分配存储空间。
（2）函数中定义的没有用关键词static声明的变量，即自动变量。
（3）函数调用时的现场保护和返回地址等。

在C语言中，每一个变量和函数都有两个属性：数据类型和数据的存储类别。
C的存储类别包括4种：自动的auto，静态的static，寄存器的register，外部的extern。
auto：可以省略，不写auto则隐含指定了“自动存储类别”。
static：有时希望函数变量中的值在函数调用结束后不消失而继续保留原值，
		即其占用的存储单元不释放，在下一次调用该函数时，该变量已有值（就是上一次函数调用结束时的值）。
*/

/*
例7.16 考虑静态局部变量的值。
*/
#include<stdio.h>
int main()
{
	int f(int);
	int a = 2, i;
	for(i = 0; i < 3; i++) printf("%d\n", f(a));

	return 0;
}

int f(int a)
{
	auto int b = 0;
	static int c = 3;
	b = b + 1;
	c = c + 1;
	return (a+b+c);
}

/*
静态局部变量来说，编译时自动赋初值0（对数值型变量）或空字符‘\0’（对字符变量）。
而对自动变量来说，它的值是一个不确定的值。
虽然静态局部变量在函数调用结束后仍然存在，但其他函数是不能引用它的。
因为它是局部变量，只能被本函数引用，而不能被其他函数引用。
*/
