#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("*************************\n");
	printf("***1.play    0.exit******\n");
	printf("*************************\n");
}

void game()
{
	int guess = 0;
	//1.����һ�������
	int ret = rand()%100+1;//����1-100֮����������ʹ�ÿ⺯����Ҫ����ͷ�ļ�����ͨ��MSDN�鵽ͷ�ļ�
	//printf("%d\n", ret);
	//2.������
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	//��ʱ����������������������ʼ��
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
