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
	//1.生成一个随机数
	int ret = rand()%100+1;//生成1-100之间的随机数，使用库函数需要引用头文件，可通过MSDN查到头文件
	//printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	//用时间戳来设置随机数的生成起始点
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
