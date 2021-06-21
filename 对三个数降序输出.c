#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void f(int * x, int * y)
{
	int t;
	if (*x < *y)
	{
		t = *x;
		*x = *y;
		*y = t;
	}

	return;
}

int main(void)
{
	int a, b, c, t;
	a = b = c = 0;

	printf("请输入三个数（以空格间隔）：");
	scanf("%d%d%d", &a, &b, &c);

	f(&a, &b);
	f(&a, &c);
	f(&b, &c);
	
	printf("%d %d %d\n", a, b, c);
	
	return 0;
}