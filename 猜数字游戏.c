#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "menu.h"
#include "game.h"

int main(void)
{
	int i;

	srand((unsigned)time(NULL));   //利用时间戳生成随机起始点

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &i);

		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出程序！\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (i);

	return 0;
}