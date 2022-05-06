#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//Based on qsort function£¬create a bubbl_function to sort.
struct stu
{
	char name[20];
	int age;
};
//void qsort(void* base, size_t num, size_t size,
//	int (*compar)(const void*, const void*));      The paramrter of qsort function.
void swap(char* buf1, char* buf2, int sz)//Thr function exchanges two elements.
{
	int i = 0;
		for (; i < sz; i++)
		{
			char tmp = *buf1;
			*buf1 = *buf2;
			*buf2 = tmp;
			buf1++;
			buf2++;
		}
 }
void bubble_sort(void* base, int sz, int width,int(*cmp)(const void* e1, const void* e2))//We don't know the type of parameters.
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//Exchange the element
			}
		}
	}
}
int cmp_stu_by_age(const void* e1, const void* e2)//Comparison Functione.
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test5()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]),cmp_stu_by_age);
}
int main()
{
	test4();
	test5();
	return 0;
}
