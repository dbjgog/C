/*
��5.3 while��do��while�Ƚϡ� 
*/

//��whileѭ��
/*
#include<stdio.h>
int main()
{
	int i, sum=0;
	printf("please enter i, i=?");
	scanf("%d", &i);
	while(i <= 10)
	{
		sum = sum+i;
		i++;	
	}	
	printf("sum=%d\n", sum);
	return 0;
} 
*/ 
//��do��whileѭ��

#include<stdio.h>
int main()
{
	int i, sum=0;
	printf("please enter i, i=?");
	scanf("%d", &i);
	do
	{
		sum = sum + i;
		i++;	
	}while(i <= 10);
	printf("sum=%d\n", sum);
	return 0;	
} 

//��while����ı��ʽ�ĵ�һ�ε�ֵΪ���桱ʱ������ѭ���õ��Ľ����ͬ
//�������߽������ͬ
//while�����жϺ�ִ��
//do��while����ִ�к��ж� 
