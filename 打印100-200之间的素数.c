#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j;
	int count = 0;

	for (i = 101; i < 200; i += 2)   //ֱ���ų�ż��
	{
		for (j = 2; j <= sqrt((double)i); ++j)      //ֱ���ų�1�ͱ���   �Գ�������1-����֮�����������������
			                                     //ֱ�ӹ���i��һ��
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

	printf("\n����%d��������\n", count);

	return 0;
}