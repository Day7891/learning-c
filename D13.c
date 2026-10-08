#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int option = 0;
int count = 0;
float average = 0;
struct Student
{
	char name[50];
	int scores;
	int studentID;
};
struct Student students[100];
void inputStudents(struct Student* stu, int* pCount)
{
	for (int num1 = 0; num1 < *pCount;num1++)
	{
		printf("=======================\n");
		printf("第%d个学生\n", num1+1);
		printf("学号:");
		scanf("%d", &stu[num1].studentID);
		printf("姓名:");
		scanf("%s", stu[num1].name);
		printf("成绩:");
		scanf("%d", &stu[num1].scores);
		printf("=======================\n");
	}
}
void showAll(struct Student* stu, int count)
{
	for (int num2 = 0; num2 < count;num2++)
	{
		printf("========================\n");
		printf("第%d个学生\n", num2 + 1);
		printf("学号:%d\n", stu[num2].studentID);
		printf("姓名:%s\n", stu[num2].name);
		printf("成绩:%d\n", stu[num2].scores);
		printf("=========================\n");
		
	}
}
void showStats(struct Student* stu, int count)
{
	int max = stu[0].scores;
	int min = stu[0].scores;
	int allscores = 0;
	for (int num3 = 0;num3 < count;num3++)
	{
		allscores =allscores + stu[num3].scores;
		if (stu[num3].scores > max)
		{
			max = stu[num3].scores;
		}
		if (stu[num3].scores < min)
		{
			min = stu[num3].scores;
		}
	}
		average =(float) allscores / count;
		printf("平均分:%.2f\n", average);
		printf("最大值:%d\n", max);
		printf("最小值:%d\n", min);
	
}
void sortByScore(struct Student* stu, int count)
{
	for (int num4 = 0; num4 < count - 1;num4++)
	{
		for (int num0 = 0;num0 < count - num4 - 1;num0++)
		{
			if (stu[num0].scores < stu[num0 + 1].scores)
			{
				struct Student t = stu[num0];
				stu[num0] = stu[num0 + 1];
				stu[num0 + 1] = t;
			}
		}
	}
	printf("请输入2来查看\n");
}
	int main(void)
	{
		while (1)
		{
			printf("========== 学生成绩管理系统 ==========\n");
			printf("            1. 录入学生               \n");
			printf("            2. 显示全部               \n");
			printf("            3. 统计（平均分 / 最高分 / 最低分\n");
			printf("            4. 按成绩排序                   \n");
			printf("            0. 退出                           \n");
			printf("======================================\n");
			printf("请输入选项");
			scanf("%d", &option);
			switch (option)
			{
			case 1:
				printf("请输入你要录入学生的人数:");
				scanf("%d", &count);
				inputStudents(students, &count);
				break;
			case 2:
				showAll(students, count);
				break;
			case 3:
				showStats(students, count);
				break;
			case 4:
				sortByScore(students, count);
				break;
			default:
				printf("无效选项，请重新输入\n");
				break;
			}
			if (option == 0)
			{
				printf("再见\n");
				break;
			}
		}
		return 0;
	}


