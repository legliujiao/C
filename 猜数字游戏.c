#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "menu.h"
#include "game.h"

int main(void)
{
	int i;

	srand((unsigned)time(NULL));   //����ʱ������������ʼ��

	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &i);

		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (i);

	return 0;
}