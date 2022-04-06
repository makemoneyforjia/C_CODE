#include <stdio.h>//二分法查找数字
#include <string.h>
int main()
{
	int ch[] = { 0,1,2,3,4,5,6,7,8,9 };
	int left = 0,i = 0,mid=0,x=0;
	int right = sizeof(ch) / sizeof(ch[0])-1;//整形数组为单个赋值没有'\n'所以为-1
	printf("请输入要查找的数字");
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
		printf("抱歉！没有这个数");
	else
		printf("找到了这个数下标为：%d", mid);
	return 0;
}