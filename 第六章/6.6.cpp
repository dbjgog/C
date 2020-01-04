/*
例6.6 输出一个已知的字符串。
*/

#include<iostream>
using namespace std;
int main()
{
	char c[15] = { 'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t','.' };
	int i;
	for (i = 0; i < 15; i++) printf("%c", c[i]);
	printf("\n");
	return 0;
}