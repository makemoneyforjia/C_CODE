//#include <stdio.h>//求斐波那契数
//int Fib(int a)
//{
//	if (a <= 2)
//		return 1;
//	else
//		return Fib(a - 1) + Fib(a - 2);
//}  
//int main()
//{
//	int i = 0;
//	printf("请输入一个整数->:\n");
//	scanf_s("%d", &i);
//	printf("第%d个菲波那切数是%d：", i, Fib(i));
//	return 0;
//}计算时间长
#include <stdio.h>//求斐波那契数
int Fib(int a)
{
	int x = 1;
	int y = 1;
	int z = 1;
	while(a > 2)
	{
		x = y;
		y = z;
		z = x + y;
		a--;
	}
	return z;
	
}
int main()
{
	int i = 0;
	printf("请输入一个整数->:\n");s
	scanf_s("%d", &i);
	printf("第%d个菲波那切数是%d：", i, Fib(i));
	return 0;
}