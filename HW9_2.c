#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char rnn[15];
	char birth[5];
	char *ifwoman;
	int year = 0, fnum = 0;
	char firstNum[2];

	printf("주민등록번호 입력<'-'포함>: ");
	gets(rnn);

	strcpy(birth, "19");
	strncat(birth, rnn, 2);
	printf("당신은 %s년도 생이군요\n", birth);

	ifwoman = strtok(rnn, "-");
	ifwoman = strtok(NULL, "\0");
	strncpy(firstNum, ifwoman, 1);
	
	year = atoi(birth);
	fnum = atoi(firstNum);
	if (fnum == 1){
		printf("남자분이시군요\n");
		printf("평균 수명 77를 더하면 %d년까지 산다고 계산됩니다.\n", year+77);
	}
	else {
		printf("여자분이시군요\n");
		printf("평균 수명 84를 더하면 %d년까지 산다고 계산됩니다.\n", year+84);
	}
	
}