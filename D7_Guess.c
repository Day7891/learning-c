#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand((unsigned int)time(NULL));
	int answer = rand() % 100 + 1;
	int reply = 0;
	int count = 0;
	printf("我想到一个牛逼的数字，范围是1到100，你来猜一猜");
	scanf("%d", &reply);
	while (reply != answer)
	{
		count++;
		if (reply < answer)
		{
			printf("你个二货，猜小了,请重新输入一个数字：");
		}
		else
		{
			printf("你个二货，猜大了，请重新输入一个数字：");
		}
		scanf("%d", &reply);
	}
	if (reply == answer)
	{
		count++;
		printf("你太聪明了，猜对了\n");
		printf("在本次游戏中你猜了%d次\n", count);
	}
	return 0;
}