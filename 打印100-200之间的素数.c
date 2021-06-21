#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j;
	int count = 0;

	for (i = 101; i < 200; i += 2)   //直接排除偶数
	{
		for (j = 2; j <= sqrt((double)i); ++j)      //直接排除1和本身   试除法（将1-本身之间的所有数拿来除）
			                                     //直接过滤i的一半
		{
			if (i%j == 0)
				break;
		}

		if (j > sqrt((double)i))
		{
			printf("%d ", i);
			count++;
		}
	}

	printf("\n共有%d个素数。\n", count);

	return 0;
}