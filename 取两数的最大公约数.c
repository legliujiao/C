#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int m, n, r;

	printf("�������������������Կո�������");
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

	printf("���Լ��Ϊ%d\n", r);

	return 0;
}