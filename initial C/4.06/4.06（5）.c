#include <stdio.h>
int main()
{   
	char sb[10] = { 0 }; int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������->");
		scanf_s("%s",sb,10);
		if (strcmp("12345", sb) == 0)
		{
			printf("������ȷ");
			break;
		}

	}
	if (i == 3)
		printf("�������������");

	return 0;

}