//test_1 MAX函数来比较大小
#include <stdio.h>
int MAX(int a, int b)
{
	if (a>b||a==b)
		return a;
	else
		return b;
}
int main()
{
	printf("请输入两个数=>整数");
	int a = 0, b = 0,c=0;
	scanf_s("%d%d", &a, &b);
	c = MAX(a, b);
	printf("两数中大的是%d", c);
	return 0;
}
