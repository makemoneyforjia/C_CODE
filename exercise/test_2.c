#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//test_2兰州烧饼
int main()
{
	int k=0, n=0;
	printf("请输入k和n\n");
	scanf("%d %d", &k,& n);
	/*while (scanf("%d%d", &n, &k) != EOF)这个的意思就是必须n,两个变量的值都顺利读取*/
	if (n <= k)
		printf("至少需要两分钟\n");
	else
		printf("至少需要%d分钟\n", 2 * n / k > 1 ? 2 * n / k: 2 * n / k + 1);
	return 0;
}