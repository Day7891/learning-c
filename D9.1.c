#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	printf("请输入20个数字:");
	int score[20];
	for (int i = 0; i < 20;i++)
	{
		scanf("%d", &score[i]);
	}
	int max = score[0];
	int min = score[0];
	int sum = 0;
	for (int i = 1; i < 20;i++)
	{
		if (max < score[i])
		{
			max = score[i];
		}
		if (min > score[i])
		{
			min = score[i];
		}
		sum = sum + score[i];
	}
	sum = sum + score[0];
	float average = 0.0;
	average = (sum / 20.0);
	printf("最高分是: %d\n", max);
	printf("最低分是: %d\n", min);
	printf("平均分是: %.1f\n", average);
	return 0;
}