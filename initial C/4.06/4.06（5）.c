#include <stdio.h>
int main()
{   
	char sb[10] = { 0 }; int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码->");
		scanf_s("%s",sb,10);
		if (strcmp("12345", sb) == 0)
		{
			printf("密码正确");
			break;
		}

	}
	if (i == 3)
		printf("三次密码均错误");

	return 0;

}