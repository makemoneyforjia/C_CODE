#include <stdio.h>//nµÄ½×³Ë
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "hellow CJP! Are you my loupo?";
	char arr2[] = "#############################";
	int left = 0, right = sizeof(arr1)/sizeof(arr1[0])-2;
	printf("%s\n", arr2);
	for (; left <= right;)
	{
		arr2[left] = arr1[left];
		left++;
		arr2[right] = arr1[right];
		right--;
		Sleep(1000);
		system("cls");
		printf("%s\n", arr2);

	}
	return 0;
}