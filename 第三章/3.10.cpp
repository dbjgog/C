/*
��3.3 ����һ����д��ĸ��Ҫ����Сд��ĸ����� 
*/ 

/*
��3.10 ��д��3.3����ʹ֮����ʹ�����κδ�д��ĸ���Ӽ�������һ����д��ĸ������ʾ������ʾ��Ӧ��Сд��ĸ��
*/

#include<stdio.h>
int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');
	return 0;	
} 

//����һ�ַ���
/*
#include<stdio.h>
int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	printf("��д��ĸ:%c\n Сд��ĸ��%c\n", c1, c2);
	return 0;	
} 
*/
