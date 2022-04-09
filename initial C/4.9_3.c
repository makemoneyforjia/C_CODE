#include <stdio.h>//递归求n的阶乘
int Fac(int a)
{
	if (a!=0)
		return a * Fac(a - 1);
	return 1;
}
int main()
{
	int i = 0;
	printf("请输入一个z整数->:\n");
	scanf_s("%d", &i);
	printf("%d的阶乘是%d：",i, Fac(i));
	return 0;
}