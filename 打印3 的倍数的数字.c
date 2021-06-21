#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int i, count = 0;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
			count++;
		}
	
	}

	printf("\n1-100之间3的倍数有%d个。\n", count);

	return 0;
}