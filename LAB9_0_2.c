#include <stdio.h>  
#include <ctype.h> //문자처리 함수 사용을 위해 
void main() 
{  
	char c;  
	printf("Enter characters(^Z for exit):\n");  
	c = getchar();   
	while (c != EOF) //EOF = end of file : 파일의 끝
	{   
		putchar(c);   
		c = getchar();   
	} 
}