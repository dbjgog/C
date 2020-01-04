/*
例6.8 输入一行字符，统计其中有多少单词，单词之间用空格分隔开。
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num = 1;
	char c;
	while (c = getchar())
	{
		if (c == ' ')num++;
		if (c == '\n') break;
	}
	printf("There are %d words in this line.\n", num);
	return 0;
}
//gets从标准输入设备读字符串函数，其可以无限读取，不会判断上限，以回车结束读取