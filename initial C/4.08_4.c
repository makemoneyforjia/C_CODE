#include <stdio.h>//���������ֵ
int Find(int arr[],int k,int c)
{
	int i = 0,left=0,right=0,mid=0;
	/*right= sizeof(arr) / sizeof(arr[0])-1;arr������ʵ���е�һ��Ԫ�صĵ�ַ*/
	right = c - 1;
	for (i = 0; left <=right; i++)

	{
		mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
			break;
	}
	if (arr[mid] == k)
		return mid;
	else
		return -1;
}

int main()
{
	int a = 0, b = 0,c=0;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	c = sizeof(arr) / sizeof(arr[0]);
	printf("������1������\n");
	scanf_s("%d", &a);
	b = Find(arr,a,c);
	if (b==-1)
		printf("û�������");
	else
		printf("����������±�Ϊ->%d", b);
	return 0;
}