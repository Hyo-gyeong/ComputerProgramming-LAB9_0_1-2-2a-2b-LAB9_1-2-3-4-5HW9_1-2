#include <stdio.h> 
#include <string.h> 
#include <ctype.h>
 
int main(void) 
{  
	char string[50]; // 입력되는 문자열을 저장  
	char alphaString1[50]; // 입력문자열에서 알파벳만 저장    
	char alphaString2[50]; // 대소문자를 바꿈  
	char digitString[50];    
	char convertedString[50]; // 문자들과 숫자들로 재배열한 문자열 
	
	int i = 0;
	int acount = 0;
	int dcount = 0;

	printf("문자열을 입력하세요:"); 
	gets(string);

	while (string[i] != '\0')
	{
		if (isdigit(string[i])){
			digitString[acount] = string[i];
			acount++;
		}
		else{
			alphaString1[dcount] = string[i];
			dcount++;
		}
		i++;
	}

	digitString[acount] = '\0';
	alphaString1[dcount] = '\0';

	printf("문자들은 %s\n", alphaString1);   
	printf("숫자들은 %s\n", digitString); 
 
	strcpy(alphaString2, alphaString1);

	i = 0;
	while (alphaString1[i] != '\0'){
		if (islower(alphaString1[i]))
			alphaString2[i] = toupper(alphaString1[i]);
		else
			alphaString2[i] = tolower(alphaString1[i]);
		i++;
	}

	printf("대소문자를 바꾼 문자들은 %s\n", alphaString2); 

	strncat(alphaString1, digitString, strlen(digitString));
	strcpy(convertedString, alphaString1);
	printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);     
}