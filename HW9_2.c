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

	printf("�ֹε�Ϲ�ȣ �Է�<'-'����>: ");
	gets(rnn);

	strcpy(birth, "19");
	strncat(birth, rnn, 2);
	printf("����� %s�⵵ ���̱���\n", birth);

	ifwoman = strtok(rnn, "-");
	ifwoman = strtok(NULL, "\0");
	strncpy(firstNum, ifwoman, 1);
	
	year = atoi(birth);
	fnum = atoi(firstNum);
	if (fnum == 1){
		printf("���ں��̽ñ���\n");
		printf("��� ���� 77�� ���ϸ� %d����� ��ٰ� ���˴ϴ�.\n", year+77);
	}
	else {
		printf("���ں��̽ñ���\n");
		printf("��� ���� 84�� ���ϸ� %d����� ��ٰ� ���˴ϴ�.\n", year+84);
	}
	
}