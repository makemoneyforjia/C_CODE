#include <stdio.h>
#include <string.h> 
int main()
/* {
	int a;
	char arr1[] = ("abc");
	//"abc"--'a','b','c' '\0'--�ַ���������־
	char arr2[] = { 'a','b','c'};//{ 'a','b','c','0'}
	printf("%s\n", arr2);
	printf("%s\n", arr1);
	return 0;
}*/
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}ctrl+k+c
//{
//	int x = 0;
//	printf("��Ҫ�ú�ѧϰ��(ѡ��0��1)��>");
//	scanf_s("%d", &x);
//	if (x == 1)
//	{  printf("����к�offer");
//	}
//	else
//	{
//		printf("������");
//	}
//	return 0;
//}
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	while( i<10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
	 
}