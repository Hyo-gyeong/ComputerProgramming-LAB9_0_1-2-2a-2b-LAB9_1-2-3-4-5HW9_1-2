#include <stdio.h>  
#include <conio.h>
#include <ctype.h> //문자처리 함수 사용을 위해 
void main() 
{  
	char c;  
	printf("Enter characters(^Z for exit):\n");  
	
	while ((c = getchar()) != EOF) //입력까지 포함함.
	{   
		if (isupper(c))
			fputc(tolower(c), stdout); 
		else
			fputc(toupper(c), stdout);  
	} 
}