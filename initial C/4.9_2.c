#include <stdio.h>//递归；输入一个整数，按照最高位依次打印 
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
 }
int main()
{
	int n = 0;
	printf("请输入一个整数->:\n");
	scanf_s("%d", &n);
	print(n);
	return 0;
}