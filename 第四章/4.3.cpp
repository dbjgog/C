/*
��4.3 ����3����a,b,c,Ҫ����С�����˳�������
*/

#include<stdio.h>
int main()
{
	float a, b, c, t;
	scanf("%f,%f,%f", &a, &b, &c);
	if(a>b)
	{
		t = b;
		b = a;
		a = t;	
	}	
	if(a>c)
	{
		t = c;
		c = a;
		a = t;
	}
	if(b>c)
	{
		t = c;
		c = b;
		b = t;	
	}
	printf("%5.2f,%5.2f,%5.2f\n", a, b, c);
	return 0;
} 
