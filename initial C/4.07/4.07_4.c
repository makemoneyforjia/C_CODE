#include <stdio.h>//关机小程序
#include <stdlib.h>
#include <windows.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while(1)
	{
		printf("请输入我是猪，不然电脑60s后关机");
		scanf_s("%s", input,10);
		if (0 == strcmp(input, "我是猪"))
		{
			system("shutdown -a");
			printf("退出程序");
			break;
		}
	}
	return 0;
}