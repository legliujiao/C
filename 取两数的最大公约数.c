#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int m, n, r;

	printf("请输入两数正整数（以空格间隔）：");
	scanf("%d%d", &m, &n);

	if (m < n)
	{
		r = m;
		m = n;
		n = r;
	}

	while ( m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}

	printf("最大公约数为%d\n", r);

	return 0;
}