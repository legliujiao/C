#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main(void)
{
	int year;
	int count = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)   //������ж�����
			                                                         //�ܱ�4�����Ҳ��ܱ�100����������������ж��ܷ�400�������ܾ�������
		{
			printf("%d  ", year);
			count++;
		}
	}
	
	printf("\n����%d�����ꡣ\n", count);

	return 0;
}