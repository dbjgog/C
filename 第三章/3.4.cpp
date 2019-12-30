/*
例3.4 给出三角形的三边长，求三角形面积。
解题思路，假设给定的三个边符合构成三角形的条件：任意两边之和大于第三边。
解此题的关键是要找到求三角形面积的公式。
从数学知识已知求三角形面积的公式为：area = sqrt(s*(s-a)*(s-b)*(s-c))。
其中s是周长的一半。 
*/

#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, s, area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%f\tb=%f\tc=%f\n", a, b, c);
	printf("area=%f\n", area);
	return 0;
}

 
