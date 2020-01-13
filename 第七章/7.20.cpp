/*
（3）将外部变量的作用域限制在本文件中
有时在程序设计中希望某些外部变量只限于被本文件引用，而不能被其他文件引用，
这时可以在定义外部变量时加一个static声明。

这种加上static声明、只能用于本文件的外部变量称为静态外部变量。

用static声明一个变量的作用是：
（1）对局部变量用static声明，把它分配在静态存储区，
该变量在整个程序执行期间不释放，其所分配的空间始终存在。
（2）对全局变量用static声明，则该变量的作用域只限于本文件模块（即被声明的文件中）。
*/

/*
函数的声明和函数的定义。
*/

/*
内部函数和外部函数

（1）内部函数：只能被本文件中其他函数所调用，即内部函数。在定义内部函数时，
在函数名和函数类型的前面加static。
（2）外部函数（默认）：在函数名和函数类型的前面加extern，可供其他文件调用。

在需要调用此函数的其他文件中，需要对此函数作声明（不要忘记，即使在本文件调用一个函数，
也要用函数原型进行声明。）在对此函数作声明时，要加关键字extern，表示该函数时在其他文件中定义的外部函数。
*/

/*
例7.20 有一个字符串，内有若干个字符，现输入一个字符，要求程序将字符串中该字符删去。用外部函数实现。
*/


//file1.c文件
#include<stdio.h>
int main()
{
	extern void enter_string(char str[]);
	extern void delete_string(char str[], char ch);
	extern void print_string(char str[]);
	
	char c, str[80];
	enter_string(str);
	scanf("%c", &c);
	delete_string(str, c);
	print_string(str);
	return 0;
}


/*
//file2.c文件
void enter_string(char str[80])
{
	gets(str);//以回车为结束
}

//file3.c文件
void delete_string(chat str[], char ch)
{
	int i, j;
	for(i=j=0; str[i] != '\0'; i++) if(str[i] != ch) str[j++] = str[i];
	str[j] = '\0';
}

//file4.c文件
void printf_string(char str[])
{
	printf("%s\n", str);
}
*/
