#include <stdio.h>//猜数字游戏
#include <stdlib.h>
#include <time.h>
void menu()//创建菜单
{
	printf("***************************\n");
	printf("*****1.玩游戏   0.exit*****\n");
	printf("***************************\n");
}
void game()//创建游戏主题函数
{
	int a = rand() % 100 + 1;//生成1~100的随机数
	int input = 0;
	while (1)
	{
		printf("请输入你猜的数->");
		scanf_s("%d", &input);
		if (input > a)
			printf("你猜的数大了");
		else if (input < a)
			printf("你猜的数小了");
		else
		{
			printf("你猜的数正确");
			break;					//直到结果正确才退出游戏
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));//①srand是随机数发生器的初始化函数；②void  srand（unsigned  int   seed）seed相当于一个种子，
	//srand函数根据这个种子seed，设置一个随机起点，而rand函数根据这个随机起点，返回一个随机数【seed   ，RAND_MAX】, 其中RAND_MAX是0x7ffff，
	//但是是一个伪的随机数（多次编译产生的随机数是一样的，除非给一个变化的种子——time(NULL)）
	int input=0;
	do
	{
		menu();
		printf("是否要玩游戏");
		scanf_s("%d", &input);
		switch (input)
		{
		case(1):
			game();
			break;
		case(0):
			printf("结束程序->");
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);

	
	return 0;
}