#include <stdio.h>//n的阶乘
#include <string.h>
int M(int n)
{
	int  i = 0, z = 1;
	for (i = 1, z = 1; i <= n; i++)
		z = z * i;
	return z;
}
int main()
{
	int n = 0; int y = 0;
	scanf_s("%d", &n);
	y = M(n);

	printf("阶乘结果为%d", y);

}//函数
//{
// 
//	int n = 0, i = 0,z=0;
//	scanf_s("%d", &n);
//	for (i = 1, z = 1; i <= n; i++)
//		z = z * i;
//	printf("阶乘结果为%d", z);
//	return 0;
//}直接编程
