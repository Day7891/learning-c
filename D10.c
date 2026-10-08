#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char secret[25] = "123456";
    char answer[25];
    int count = 0;                          

    while (count < 3)                       
    {
        printf("请输入密码：");
        scanf("%s", answer);
        count++;                            

        if (strcmp(answer, secret) == 0)    
        {
            printf("登录成功\n");
            return 0;                       
        }

        printf("密码错误（还剩 %d 次）\n", 3 - count);
    }

    printf("3 次都没对，程序结束\n");
    return 0;
}