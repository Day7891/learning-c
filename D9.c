#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int score[10];
	printf("请输入十个数字:");
	for (int i = 0;i < 10; i++)
	{
		scanf("%d", &score[i]);
	}
	for (int pass = 1;pass < 10;pass++)
	{
		int swap = 0;
		for (int j = 0; j < 9; j++)
		{
			int t = 0;
			if (score[j] > score[j + 1])
			{
				t = score[j];
				score[j] = score[j + 1];
				score[j + 1] = t;
				int swap = 1;
			}
		}
		if (!swap)
		{
			break;
		}
	}
	
	for (int j = 0; j < 9;j++)
	{
		printf("%d ", score[j]);
	}
	printf("%d\n", score[9]);
	return 0;
}

















