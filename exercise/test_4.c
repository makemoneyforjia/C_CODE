#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//test_4 �ڼ���ٷ��������ܱ�4�������Ҳ��ܱ�100�����������ꡣ����2004�������꣬1901�겻�����꣩���������ܱ�400�����������ꡣ����2000�������꣬1900�겻�����꣩
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	while ((scanf("%d/%d/%d", &a, &b, &c)) != 0)
	{
		int sum = 0;
		for (i = 0; i < b - 1; i++)
			sum += mon[i];
		sum += c;
			
		if ((a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) && b >= 3)
				sum++;

			printf("%d\n", sum);

	}

	return 0;
}