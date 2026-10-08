#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isleapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main(void)
{
	int count = 0;
	for (int year = 1900; year < 2101;year++)
	{
		if (isleapyear(year))
		{
			printf("%d ", year);
			count++;

			if (count % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\n1900到2100总共有%d个\n", count);
}