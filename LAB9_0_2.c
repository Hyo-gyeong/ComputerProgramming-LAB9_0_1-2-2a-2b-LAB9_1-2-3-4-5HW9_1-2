#include <stdio.h>  
#include <ctype.h> //����ó�� �Լ� ����� ���� 
void main() 
{  
	char c;  
	printf("Enter characters(^Z for exit):\n");  
	c = getchar();   
	while (c != EOF) //EOF = end of file : ������ ��
	{   
		putchar(c);   
		c = getchar();   
	} 
}