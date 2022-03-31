#include <stdio.h>
/* {
	printf("C SQ");
	printf("\nC\nSQ");
	printf("\nC");
	printf("\rSQ");
	return 0;
}2.12.1*/
/*{
	int a,b,f,e;
	printf("你现在几岁几个月几天？");
	scanf_s("%d,%d,%d", &a, &b, &f);
	a = 365 * a + 30 * b + f;
		printf("你目前%d天",a);
		return 0;
}2.12.2*/
/*void br(void);
void ic(void);
int main()
{
	printf("Brazil, Russia, Indian, China\n");
	br();
	ic();
	return 0;
}
void br(void)
{
	printf("Brazil, Russia\n");
}
void ic(void)
{
	printf("Indian, China\n");
}2.12.3*/
/*
int main()
{
	int toes = 10, a, b;
	a = toes* toes;
	b = toes * toes* toes;
	printf("%d\n%d\n%d\n", toes, a, b);
	return 0;
}}2.12.4*/
void smile(int n);
int main()
{
	smile(3);
		return 0;
}
void smile(int n)
{
	if (n-- > 0);

	printf(n * "Smile");
	else
		return 0;
}

