#include <stdio.h>//判断一个数是否是素数
#include <string.h>
#include <math.h>
int fx(int a)
//{
//	int j = 0;
//	for (int i = 1; i <= a; i++)
//	{
//		if (a % i == 0)
//			j++;
//	}
//	if (j == 2)
//		return 1;
//	else
//		return 0;
//}//太复杂
{
	int j = 0;
	for (j = 2; j <= sqrt(a); j++)/*for (j = 2; j< a; j++)简化*/
	{
		if (a % j == 0)
			return 0;
	}
		return 1;
}


int main()
{
	int a = 0; int b = 0;
	printf("请输入一个整数\n");
	scanf_s("%d", &a);
	b = fx(a);
	if(b==1)
		printf("%d是素数\n",a);
	else
		printf("%d不是素数\n", a);
	return 0;
}