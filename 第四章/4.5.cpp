/*
例4.5 有一函数：当x<=0，y=-1；当x=0，y=0；当x>0，y=1。
编一程序，输入一个x值，要求输出相应的y值。
*/

#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	if(x<0) y=-1;
	else
	{
		if(x == 0) y=0;
		else y=1;
	}	
	printf("%d\n", y);
	return 0;
} 

//另外一种方法
/*
#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	if(x>=0)
	{
		if(x>0) y=1;
		else y=0;
	}
	else y=-1;
	printf("x=%d,y=%d\n", x, y);
	return 0;
}
*/
}
}
