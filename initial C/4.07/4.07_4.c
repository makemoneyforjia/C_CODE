#include <stdio.h>//�ػ�С����
#include <stdlib.h>
#include <windows.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while(1)
	{
		printf("��������������Ȼ����60s��ػ�");
		scanf_s("%s", input,10);
		if (0 == strcmp(input, "������"))
		{
			system("shutdown -a");
			printf("�˳�����");
			break;
		}
	}
	return 0;
}