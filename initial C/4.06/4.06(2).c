#include <stdio.h>//nµÄ½×³Ë
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "hellow CJP! Are you my loupo?";
	char arr2[] = "#############################";
	int left = 0, right = 0;
	printf("%s", arr2);
	for (; left <= right;)
	{ 
		arr2[left] = arr1[left];
		left++;
		arr2[right] = arr1[right];
		right++;
		Sleep(1000);
		printf("%s", arr2);

	}

}