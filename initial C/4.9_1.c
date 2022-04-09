#include <stdio.h>//递归；不创建临时变量求字符串长度
int len(char* p)
{
	if (*p!='\0')
	{
		return 1 + len(p + 1);
	}
		return 0;
 }
int main()
{
	char arr[10] = { 0 };
	printf("请输入一个字符串->:\n");
	scanf_s("%s",arr,9);//注意数组下标越界
	printf("字符串的长度是：%d",len(arr));
	return 0;
}