//test_1 MAX�������Ƚϴ�С
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
	printf("������������=>����");
	int a = 0, b = 0,c=0;
	scanf_s("%d%d", &a, &b);
	c = MAX(a, b);
	printf("�����д����%d", c);
	return 0;
}
