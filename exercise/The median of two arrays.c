#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>//Find the median of two arrays.
int sort(int* arr, int sz)
{
	int t = sz - 1;
		for (int i = 0; i < sz; i++)
		{
			for (int j = 0; j < sz - i - 1; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j+1]=tmp;
				}
			}
		}
		if (sz%2 == 0)
			return (arr[(t / 2) - 1] + arr[(t / 2) + 1]) / 2; 
		else
			return arr[(t + 1) / 2];
}
int main()
{
	int m = 0;
	int n = 0;
	int nums1[1000] = { 0 };
	int nums2[1000] = { 0 };
	int nums3[2000] = { 0 };
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	assert(m >= 0 && m <= 100 && n >= 0 && n <= 100);
	printf("请输入nums1的数据：->: ");
	for (int i = 0; i < m;i++)
	{
		scanf_s("%d", &nums1[i]);
	}
	printf("请输入nums2的数据：->: ");
	for (int j = 0; j < n; j++)
	{
		scanf_s("%d", &nums2[j]);
	}
	int x = 0;
	int y = 0;
	int z = 0;
	while (x < m)
	{
		nums3[z++] = nums1[x++];
	}
	while (y < z)
	{
		nums3[z++] = nums2[y++];
	}
	printf("%d", sort(nums3, m + n));
	return 0;
	  }
