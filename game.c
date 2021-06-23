#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void game(void)
{
	printf("\n猜数字开始!\n");

	int n = rand()%100 + 1;     //生成随机数
	int guess = 0;              //存放用户数字
	
	while (1)
	{
		printf("\n请猜数字：");
		scanf("%d", &guess);

		if (guess > n)
			printf("\n猜大了！\n");
		else if (guess < n)
			printf("\n猜小了！\n");
		else
		{
			printf("\n猜对了！  数字是%d\n", n);
			break;
		}
	}

	return;
}