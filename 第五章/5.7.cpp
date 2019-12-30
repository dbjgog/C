/*
例5.7 用（π/4）=（约等于）1-1/3+1/5-1/7+…求π的近似值，直到发现某一项的绝对值小于1e-6为止（该项不累加）。
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int sign = 1;
	double pi=0.0, n=1.0, term=1.0;
	while(fabs(term) >= 1e-6)
	{
		pi = pi + term;
		n = n + 2; 
		sign = -sign;
		term = sign/n; 
	}
	pi = pi*4;
	printf("pi=%10.8f\n", pi);
	return 0;
} 
 
