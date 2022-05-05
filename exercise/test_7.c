#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//test_7最小公倍数
#include <assert.h>
int main()
{
	int a = 0;
	int b = 0;
	int d = 0;
	while (scanf("%d %d", &a, &b)!=EOF)
	{
		int A = a;
		int B = b;
		assert(a > 0 && a <= 1000 && b > 0 && b <= 1000);
		int c = 0;
		if (a < b)
		{
			c = a;
			a = b;
			b = c;
		}
		while (a % b)
		{
			d = a % b;
			a = b;
			b = d;
		}
		printf("最大公倍数为%d\n", A * B / d);
	}
	return 0;
}

