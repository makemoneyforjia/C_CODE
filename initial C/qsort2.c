#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//qsort函数
struct stu
{
	char name[20];
	int age;
};
//void qsort(void* base, size_t num, size_t size,
//	int (*compar)(const void*, const void*));
int cmp_int(const void* e1, const void* e2)//比较两个整型值
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
