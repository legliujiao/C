#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; ++i)
	{
		for (j = 1; j <= i; ++j)
			printf("%d*%d=%-2d ", j, i, i*j);
	
		putchar('\n');
	}

	return 0;
}