#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Stu
{
	char name[20];
	int age;
	int number[20];
};
int main()
{
	struct Stu s1 = { "����",20,202121217788 };
	struct Stu* ps1 = &s1;
	printf("s1������%s\n", (*ps1).name);
	printf("s1������%s", ps1->name);
	return 0;
}
