/*
��4.6 Ҫ���տ��Գɼ��ĵȼ�����ٷ��Ʒ����Σ�A��Ϊ85�����ϣ�
B��Ϊ70~84�֣�C��Ϊ60~69�����¡��ɼ��ĵȼ��ɼ������롣 
*/

#include<stdio.h>
int main()
{
	char grade;
	scanf("%c", &grade);
	printf("Your score:");
	switch(grade)
	{
		case'A':printf("85~100\n");break;
		case'B':printf("70~84\n");break;
		case'C':printf("60~69\n");break;
		case'D':printf("<60\n");break;
		default:printf("enter data error!\n");	
	}	
	return 0;
} 
