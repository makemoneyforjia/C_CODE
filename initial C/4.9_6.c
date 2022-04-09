#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//青蛙跳台阶

int Jump(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
    {
        return Jump(n - 1) + Jump(n - 2);
    }
}

int main()
{
    int n;
    printf("有几个台阶: \n");
    scanf("%d", &n);
    printf("青蛙跳上%d个台阶有%d种方法", n, Jump(n));
    return 0;
}