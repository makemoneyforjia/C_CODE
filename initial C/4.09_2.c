#include <stdio.h>//�ݹ飻����һ���������������λ���δ�ӡ 
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
	printf("������һ������->:\n");
	scanf_s("%d", &n);
	print(n);
	return 0;
}