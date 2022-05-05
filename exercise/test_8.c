#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//test_8最大公约数和最小公倍数
#include <assert.h>
int Lcm(int a, int b)
{
	int A = a;
	int B = b;
	int d = 0;
	int c = 0;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	if (a%b==0)
	{
		return a;
	}

	while (a % b)
	{
		d = a % b;
		a = b;
		b = d;
	}
	return  A * B / d; 
}
int McF(int a, int b)
{
	int d = 0; 
	if (a % b == 0)
	{
		return a>b?b:a;
	}
	while (a % b)
	{
		d = a % b;
		a = b;
		b = d;
	}
	return d;
}
int main()
{
	int a = 0;
	int b = 0;
	int d = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{

		assert(a > 0 && a <= 1000 && b > 0 && b <= 1000);
		
		printf("最小公倍数为%d", Lcm( a, b));
		printf("  最大公因数为%d\n",McF(a, b));
	}
	return 0;
}

