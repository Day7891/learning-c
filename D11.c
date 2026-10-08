#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
void clearall(int* arr, int n)
{
	for (int i = 0;i < n; i++)
	{
		arr[i] = 0;
	}
}
int main(void)
{
	int scores[10] = { 82,77,57,34,56,65,13,34,56,78 };
	clearall(scores, 10);
	for (int j = 0;j < 10; j++)
	{
		printf("%d\n", scores[j]);
	}
	return 0;
}