//#include <stdio.h>//��쳲�������
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
//	printf("������һ������->:\n");
//	scanf_s("%d", &i);
//	printf("��%d���Ʋ���������%d��", i, Fib(i));
//	return 0;
//}����ʱ�䳤
#include <stdio.h>//��쳲�������
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
	printf("������һ������->:\n");s
	scanf_s("%d", &i);
	printf("��%d���Ʋ���������%d��", i, Fib(i));
	return 0;
}