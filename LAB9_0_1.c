// 버전 1 의 연습 
#include <stdio.h> 
#include <conio.h> 
int main(void) 
{  
	char ch;  
	
	while(1)  
	{   
		scanf("%c", &ch); // 예 1)   
		//ch = getchar(); // 예 2)  
		// ch = fgetc(stdin); // 예 3)   
		// ch = getch(); // 예 4)   입력과 동시에 출력/ 감시값까지 출력 안함.
		// ch = getche(); // 예 5)  입력과 동시에 출력/ 감시값까지 출력.
 
		if( ch == 'q' ) 
			break;   
		putch(ch); // 입력하는대로 출력
		//printf("%c", ch), 
		//putchar(ch)
		//fputc(ch, stdout);// 모두 같은 결과  
	} 
} 