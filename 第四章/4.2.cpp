/*
��4.2 ��������ʵ����������ֵ��С�����˳���������������
*/

#include<stdio.h>
int main()
{
	float a, b, t;
	scanf("%f, %f", &a, &b);
	if(a > b)
	{
		t = b;
		b = a;
		a = t;
	}
	printf("%5.2f,%5.2f\n", a, b);
	return 0;	
} 
