/*
例5.11 译密码。为使电文保密，往往按一定规律将其转换成密码，
收报人再按约定的规律将其译回原文。例如，可以按以下规律将电文变成密码：
将字母A变成E,a变成e，即变成其后的第4个字母，W变成A，X变成B，Y变成C，Z变成D。
字母按上述规律转换，非字母字符保持原状不变。
如，“China!”转换为“Glmre!”.
从键盘输入一行字符，要求输出其相应的密码。
*/

#include<stdio.h>
int main()
{
	char c;
	c = getchar();
	while(c != '\n')
	{
		if((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
		{
			if((c>='W'&&c<='Z') || (c>='w'&&c<='z')) c = c-22;
			else c = c+4;
		}
		printf("%c",c);
		c = getchar();	
	}	
	printf("\n");
	return 0;
} 
