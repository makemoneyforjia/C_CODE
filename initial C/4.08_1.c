#include <stdio.h>//函数找最大值
int Max(int a, int b)
{
	int c = (a> b) ? a: b;
	return c;
}

int main()
{
	int a = 0, b = 0,c=0;
	printf("请输入两个整数\n");
	scanf_s("%d%d", &a, &b);
	printf("最大的是%d", Max(a, b));
	return 0;
}