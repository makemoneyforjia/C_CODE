#include <stdio.h>//1~100有多少个数字9
int main()
{
	int i = 0, n = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
			++n;
		if (i / 10 == 9)
			++n;
	}
	printf("1到100中9的个数为%d", n);
	return 0;
}