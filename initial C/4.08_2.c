#include <stdio.h>//��������λ��
void swap1(int a, int b)
{
	int t = 0;
	t = a;
	a = b;
	b = a;
}//�βκ�ʵ�Σ��β�ֻ�ں����д��ڣ�ʵ�α���Ҫ��ʵ�ʵ�ֵ����swap1�У���û�з����κ�ֵ;ʵ�δ����β�ʱ���β�ֻ��ʵ�ε�һ����ʱ�������βε��޸��ǲ���ı�ʵ�ε�ֵ
void swap2(int* pa, int* pb)
{
	int t = 0;
	t = *pa;
	*pa = *pb;
	*pb = t;
}//ͨ����ַת��ֵ

int main()
{
	int a = 0, b = 0, c = 0;
	printf("��������������\n");
	scanf_s("%d%d", &a, &b);
	/*swap1(a, b);*/
	printf("swap1������a=%d b=%d\n",a,b );
	swap2(&a, &b);
	printf("swap2������a=%d b=%d\n", a, b);
	return 0;
}