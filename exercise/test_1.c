#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//test_1 ���ŵ��
int main()
{
	int a = 0, b = 0, c = 0,i=0;
	printf("����������һ�š�����һ�š�����һ�ŵĶ�����β��->\n");
	scanf("%d %d %d", &a, &b, &c);
	for (i = 10; i < 100; i++)
	{
		if (i % 3 == a && i % 5 == b && i % 7 == c)
		{
			printf("���ٵ������ǣ�%d\n", i);
			break;
		}
	
	}
	if(i==100)
	printf("No answer");
	return 0;
}