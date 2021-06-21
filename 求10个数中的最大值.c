#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int a[10] = { 12,34,21,76,35,10,45,62,38,39 };
	int max = a[0];
	int i;
	int sz = sizeof(a) / sizeof(a[0]);     //数组长度

	for (i = 1; i < sz; ++i)
	{
		if (max < a[i])
			max = a[i];
	}

	printf("max = %d\n", max);

	return 0;
}