#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//������̨��

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
    printf("�м���̨��: \n");
    scanf("%d", &n);
    printf("��������%d��̨����%d�ַ���", n, Jump(n));
    return 0;
}