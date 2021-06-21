#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int i;
	int count = 0;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 10 == 9)          //计算个位是9 时
		{
			printf("%d ", i);
			count++;
		}
		if (i / 10 == 9)         //计算十位是9时
		{
			printf("%d ", i);
			count++;
		}
	}

	printf("\ncount = %d\n", count);

	return 0;
}