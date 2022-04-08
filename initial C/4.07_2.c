#include <stdio.h>//计算1/1-1/2+1/3+...+1/99-1/100
int main()
//方法一：{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <=100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("1/1-1/2+1/3+...+1/99-1/100等于%lf\n", sum);
//	return 0;
//}方法二：分类
{
	int i = 0; double sum1 = 0; double sum2 = 0; double a = 0;
		for (i = 1; i <=100; i++)
		{
			if (i % 2 == 1)
				sum1 += 1.0 / i;//除数与被除数至少要有一个浮点数；否则默认整型
			if (i % 2 == 0)
				sum2 += 1.0/ i;

		}
	a = sum1 - sum2;
	printf("1/1-1/2+1/3+...+1/99-1/100等于%lf\n", a);
	return 0;
}