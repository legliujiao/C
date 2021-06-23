#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	system("shutdown -s -t 60");

	char ch[100];

again:
	printf("\n您的电脑将在一分钟内关机！\n\n输入“我是猪”即可停止关机！\n\n请输入：");
	scanf("%s", ch);

	if (strcmp("我是猪", ch) == 0)
	{
		system("shutdown -a");
		printf("\n成功停止关机！\n\n");
	}
	else
		goto again;

	return 0;
}