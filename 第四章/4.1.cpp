/*
��4.1 ����3.5�Ļ����϶Գ�����иĽ�����ĿҪ����ax^2+bd+c = 0���̵ĸ����ɼ�������a,b,c��
����a,b,c��ֵ���⣬������֤b^2-4ac>=0����Ҫ�ڳ����н����б����b^2-4ac>=0,�ͼ��㲢������̵�����ʵ����
���b^2-4ac<0�������������ʵ��������Ϣ�� 
*/

#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, disc, x1, x2, p, q;
	scanf("%lf%lf%lf", &a, &b, &c);
	disc = b*b-4*a*c;
	if(disc < 0)
		printf("This equation hasn't real roots\n");
	else
	{
		p = -b/(2.0*a);
		q = sqrt(disc)/(2.0*a);
		x1 = p+q;
		x2 = p-q;
		printf("real roots:\nx1=%7.2f\nx2=%7.2f\n", x1, x2);	
	}
	return 0;
} 
