#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//结构体
//struct stu//描述一个学生：名字 电话 性别  年龄  
//{ 
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//全局变量：少使用全局变量
typedef struct stu//描述一个学生：名字 电话 性别  年龄  
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
int main()
{
	struct stu s;
	stu s2;
	return 0;
}  