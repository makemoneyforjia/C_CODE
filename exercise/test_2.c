#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//test_2�����ձ�
int main()
{
	int k=0, n=0;
	printf("������k��n\n");
	scanf("%d %d", &k,& n);
	/*while (scanf("%d%d", &n, &k) != EOF)�������˼���Ǳ���n,����������ֵ��˳����ȡ*/
	if (n <= k)
		printf("������Ҫ������\n");
	else
		printf("������Ҫ%d����\n", 2 * n / k > 1 ? 2 * n / k: 2 * n / k + 1);
	return 0;
}