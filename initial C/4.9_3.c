#include <stdio.h>//�ݹ���n�Ľ׳�
int Fac(int a)
{
	if (a!=0)
		return a * Fac(a - 1);
	return 1;
}
int main()
{
	int i = 0;
	printf("������һ��z����->:\n");
	scanf_s("%d", &i);
	printf("%d�Ľ׳���%d��",i, Fac(i));
	return 0;
}