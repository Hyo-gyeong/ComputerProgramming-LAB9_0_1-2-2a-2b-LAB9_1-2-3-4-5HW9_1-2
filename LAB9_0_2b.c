#include <stdio.h>  
#include <conio.h>
#include <ctype.h> //����ó�� �Լ� ����� ���� 
void main() 
{  
	char c;  
	printf("Enter characters(^Z for exit):\n");  
	
	while ((c = getchar()) != EOF) //�Է±��� ������.
	{   
		if (isupper(c))
			fputc(tolower(c), stdout); 
		else
			fputc(toupper(c), stdout);  
	} 
}