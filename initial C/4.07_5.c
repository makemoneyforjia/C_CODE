#include <stdio.h>//��������Ϸ
#include <stdlib.h>
#include <time.h>
void menu()//�����˵�
{
	printf("***************************\n");
	printf("*****1.����Ϸ   0.exit*****\n");
	printf("***************************\n");
}
void game()//������Ϸ���⺯��
{
	int a = rand() % 100 + 1;//����1~100�������
	int input = 0;
	while (1)
	{
		printf("��������µ���->");
		scanf_s("%d", &input);
		if (input > a)
			printf("��µ�������");
		else if (input < a)
			printf("��µ���С��");
		else
		{
			printf("��µ�����ȷ");
			break;					//ֱ�������ȷ���˳���Ϸ
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));//��srand��������������ĳ�ʼ����������void  srand��unsigned  int   seed��seed�൱��һ�����ӣ�
	//srand���������������seed������һ�������㣬��rand����������������㣬����һ���������seed   ��RAND_MAX��, ����RAND_MAX��0x7ffff��
	//������һ��α�����������α���������������һ���ģ����Ǹ�һ���仯�����ӡ���time(NULL)��
	int input=0;
	do
	{
		menu();
		printf("�Ƿ�Ҫ����Ϸ");
		scanf_s("%d", &input);
		switch (input)
		{
		case(1):
			game();
			break;
		case(0):
			printf("��������->");
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);

	
	return 0;
}