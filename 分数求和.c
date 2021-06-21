#define _CRT_SECURE_NO_WARNINGS 1
//Çó1-1/2+1/3-1/4+...-1/100µÄÖµ

#include <stdio.h>

int main(void)
{
	int i;
	double sum = 0;
	int n = 1;

	for (i = 1; i <= 100; ++i)
	{
		sum += n * (1.0 / i);
		n = -n;
	}

	printf("%f\n", sum);

	return 0;
}