#include <stdio.h>//���ַ���������
#include <string.h>
int main()
{
	int ch[] = { 0,1,2,3,4,5,6,7,8,9 };
	int left = 0,i = 0,mid=0,x=0;
	int right = sizeof(ch) / sizeof(ch[0])-1;//��������Ϊ������ֵû��'\n'����Ϊ-1
	printf("������Ҫ���ҵ�����");
	scanf_s("%d", &x);
	for (; left <= right;)
	{
		mid = (right + left) / 2;
		if (ch[mid] > x)
			right=--mid;
		else if (ch[mid] < x)
			left=++mid;
		else
			break;
		
	}
	if (left > right)
		printf("��Ǹ��û�������");
	else
		printf("�ҵ���������±�Ϊ��%d", mid);
	return 0;
}