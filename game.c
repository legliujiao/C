#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void game(void)
{
	printf("\n�����ֿ�ʼ!\n");

	int n = rand()%100 + 1;     //���������
	int guess = 0;              //����û�����
	
	while (1)
	{
		printf("\n������֣�");
		scanf("%d", &guess);

		if (guess > n)
			printf("\n�´��ˣ�\n");
		else if (guess < n)
			printf("\n��С�ˣ�\n");
		else
		{
			printf("\n�¶��ˣ�  ������%d\n", n);
			break;
		}
	}

	return;
}