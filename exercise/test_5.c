#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//test_5ASCII码排序
#include <assert.h>
#include <string.h>
int main()
{
	int j = 0;
	int i = 0;
	int n = 0;
	printf("请输入n组三个字符:n=");
	scanf_s("%d\n", &n);
	assert(n > 0 && n <= 1000 );
	while (n--)
	{
		char arr[20] = { '0','0','0' };
		scanf("%s",arr);
		(void)getchar();
		for (i = 0; i < 3; i++)
		{
			for (j=0; j < 3-i-1; j++)
			{
				if (arr[j] > arr[j+1])
				{
					char s = '0';
					s = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = s;
				}
			}
		}
		printf("字符修改结果为%s：\n",arr);
	}
	return 0;
}