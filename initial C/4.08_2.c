#include <stdio.h>//函数交换位置
void swap1(int a, int b)
{
	int t = 0;
	t = a;
	a = b;
	b = a;
}//形参和实参，形参只在函数中存在，实参必须要有实际的值，在swap1中，并没有返回任何值;实参传给形参时，形参只是实参的一份临时拷贝对形参的修改是不会改变实参的值
void swap2(int* pa, int* pb)
{
	int t = 0;
	t = *pa;
	*pa = *pb;
	*pb = t;
}//通过地址转换值

int main()
{
	int a = 0, b = 0, c = 0;
	printf("请输入两个整数\n");
	scanf_s("%d%d", &a, &b);
	/*swap1(a, b);*/
	printf("swap1交换后a=%d b=%d\n",a,b );
	swap2(&a, &b);
	printf("swap2交换后a=%d b=%d\n", a, b);
	return 0;
}