#include <stdio.h>//���������ֵ
int Max(int a, int b)
{
	int c = (a> b) ? a: b;
	return c;
}

int main()
{
	int a = 0, b = 0,c=0;
	printf("��������������\n");
	scanf_s("%d%d", &a, &b);
	printf("������%d", Max(a, b));
	return 0;
}