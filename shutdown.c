#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	system("shutdown -s -t 60");

	char ch[100];

again:
	printf("\n���ĵ��Խ���һ�����ڹػ���\n\n���롰����������ֹͣ�ػ���\n\n�����룺");
	scanf("%s", ch);

	if (strcmp("������", ch) == 0)
	{
		system("shutdown -a");
		printf("\n�ɹ�ֹͣ�ػ���\n\n");
	}
	else
		goto again;

	return 0;
}