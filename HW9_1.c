#include <stdio.h> 
#include <string.h> 
#include <ctype.h>
 
int main(void) 
{  
	char string[50]; // �ԷµǴ� ���ڿ��� ����  
	char alphaString1[50]; // �Է¹��ڿ����� ���ĺ��� ����    
	char alphaString2[50]; // ��ҹ��ڸ� �ٲ�  
	char digitString[50];    
	char convertedString[50]; // ���ڵ�� ���ڵ�� ��迭�� ���ڿ� 
	
	int i = 0;
	int acount = 0;
	int dcount = 0;

	printf("���ڿ��� �Է��ϼ���:"); 
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

	printf("���ڵ��� %s\n", alphaString1);   
	printf("���ڵ��� %s\n", digitString); 
 
	strcpy(alphaString2, alphaString1);

	i = 0;
	while (alphaString1[i] != '\0'){
		if (islower(alphaString1[i]))
			alphaString2[i] = toupper(alphaString1[i]);
		else
			alphaString2[i] = tolower(alphaString1[i]);
		i++;
	}

	printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2); 

	strncat(alphaString1, digitString, strlen(digitString));
	strcpy(convertedString, alphaString1);
	printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);     
}