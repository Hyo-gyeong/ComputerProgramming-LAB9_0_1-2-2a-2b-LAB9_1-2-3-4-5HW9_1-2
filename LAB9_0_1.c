// ���� 1 �� ���� 
#include <stdio.h> 
#include <conio.h> 
int main(void) 
{  
	char ch;  
	
	while(1)  
	{   
		scanf("%c", &ch); // �� 1)   
		//ch = getchar(); // �� 2)  
		// ch = fgetc(stdin); // �� 3)   
		// ch = getch(); // �� 4)   �Է°� ���ÿ� ���/ ���ð����� ��� ����.
		// ch = getche(); // �� 5)  �Է°� ���ÿ� ���/ ���ð����� ���.
 
		if( ch == 'q' ) 
			break;   
		putch(ch); // �Է��ϴ´�� ���
		//printf("%c", ch), 
		//putchar(ch)
		//fputc(ch, stdout);// ��� ���� ���  
	} 
} 