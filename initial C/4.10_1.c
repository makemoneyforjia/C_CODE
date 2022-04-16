#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//ц╟ещеепР
void bubble_sort(int arr[],int a)
///*{
//	int i = 0,t=0,j=0;
//	for (; j < (a-1); j++)
//	{
//		for (i = 0; i < 9; i++)
//		{
//			if (*(arr + i) > *(arr + i + 1))
//			{
//				t = *(arr + i);
//				*(arr + i) = *(arr + i + 1);
//				*(arr + i + 1) = t;
//			}l
//		}
//	}
//	for (i = 0; i < 10; i++)
//	*/	printf("%d  ", *(arr+i));
//}
{
	int i = 0, t = 0, j = 0;
	for (; j < a - 1; j++)
	{
		for (i = 0; i < a-1-j; i++)
		{
			if (arr [i] > arr[ i + 1])
			{
				t = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = t;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d  ", *(arr + i));
}
int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int a = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,a);
		return 0;
}