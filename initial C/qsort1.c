#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	//指针数组
	int* arr[10];//arr为变量名先与[10]结合所以是数组类型，然后数组中每个元素类型为int*所以是一个指针数组
	//数组指针
	int* (*parr)[10] = &arr;//parr为变量名先与*结合所以类型为指针类型，指针指向的是int*[10]是一个数组，所以是数组指针，数组的每个元素是指针
	//函数指针
	int(*p)(int, int)=Add;//(*p)表示是一个指针(int, int)为函数及其参数类型 int为返回值类型  Add与&Add均为函数Add的地址
	int sum = (*p)(1, 2);//int sum = p(1, 2)*表示解引用，也可以不加，计算机也能识别
	//函数指针数组
	int(*pp[10])(int, int);//pp为变量名，先与[]结合为数组类型，每个元素为函数指针
	//指向函数指针数组的指针
	int(*(*ppp)[10])(int, int)=&pp;//*ppp为指针类型，指向的是一个函数指针数组


	return 0;
}
