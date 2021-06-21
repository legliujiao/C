#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main(void)
{
	int year;
	int count = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)   //闰年的判定方法
			                                                         //能被4整除且不能被100整除，如果不行则判断能否被400整除，能就是闰年
		{
			printf("%d  ", year);
			count++;
		}
	}
	
	printf("\n共有%d个闰年。\n", count);

	return 0;
}