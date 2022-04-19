#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//test_1 韩信点兵
int main()
{
	int a = 0, b = 0, c = 0,i=0;
	printf("请输入三人一排、五人一排、七人一排的队伍排尾：->\n");
	scanf("%d %d %d", &a, &b, &c);
	for (i = 10; i < 100; i++)
	{
		if (i % 3 == a && i % 5 == b && i % 7 == c)
		{
			printf("最少的人数是：%d\n", i);
			break;
		}
	
	}
	if(i==100)
	printf("No answer");
	return 0;
}