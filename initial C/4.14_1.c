#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//模拟实现库函数 strcpy
#include <assert.h>
char* my_strcpy(char* d,const   char* s)
//{
//	int i= 0;
//	for (; *s != '\0'; i++)
//	{
//		*d = *s;
//			d++;
//			s++;
//	}
//	*d = *s;
//}
{
	char* ret = d;
		assert(d != NULL);
		assert(s != NULL);
			while (*d++ = *s++)
			{
				;
			}
			return ret;
	
}
int main()
{ 
	char arr1[] = "********";
	char arr2[] = "hard";
	my_strcpy(arr1, arr2);
	printf("%s ", arr1);
	return 0;
}  