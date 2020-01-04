/*
例6.7 输出一个菱形图。
  *
 * *
*   *
 * *
  *
*/

#include<iostream>
using namespace std;
int main()
{
	char diamond[][5] = { {' ',' ','*'},{' ','*',' ','*'} ,
						{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'} };
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) printf("%c", diamond[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0;
}