#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//test_9 第二小整数
int main()
{
	int c = 0;
	int i = 0;
	printf("请输入有几组测试数据->: ");
	scanf("%d", &c);
	if (c == 0)
		printf("结束程序！");
	while (c--)
	{
		int n = 0;
		scanf("%d", &n);
		int arr1[11] = { 0 };
		if (n >= 2 && n <= 10)
		{
			for (i = 0; i < n; i++)
			{
				scanf("%d", &arr1[i]);
			}
			for (i = 0; i <n-1; i++)
			{
				for (int j = 0; j < n-i-1; j++)
				{
					if (arr1[j] < arr1[j + 1])
					{
						int t = arr1[j + 1];
						arr1[j + 1] = arr1[j];
						arr1[j] = t;
					}
				}
			}
			printf("第二小的数是： %d\n", (arr1[n - 2] < arr1[n - 1] ? arr1[n - 1] : arr1[n - 2]));
		}
		else
			printf("输入错误\n");
	}
	return 0;
}