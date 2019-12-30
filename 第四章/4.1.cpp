/*
例4.1 在例3.5的基础上对程序进行改进。题目要求解得ax^2+bd+c = 0方程的根。由键盘输入a,b,c。
假设a,b,c的值任意，并不保证b^2-4ac>=0。需要在程序中进行判别，如果b^2-4ac>=0,就计算并输出方程的两个实根，
如果b^2-4ac<0就输出“方程无实根”的信息。 
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
