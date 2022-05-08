#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>//Find the median of two arrays.
int my_strlen(const char* ch)
{
	int count = 0;
	assert(ch != NULL);
	while (*ch)
	{
		count++;
		ch++;
	}
	return count;
}
char* my_strlen(char* dest, const char* src)//
{
	assert(src != NULL);
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++)//先赋值后判断
	{
		;
	}
	return ret;
}
char* my_strcat(char* dest, const char* src)//
{
	assert(src != NULL);
	assert(dest != NULL);
	char* ret = dest;
	while (*dest != '\0');
	{
		dest++;
	}
	while (*dest++ = *src++)//先赋值后判断
	{
		;
	}
	return ret;
}
int my_strcmp(const char* a, const char* b)//
{
	assert(a && b);
	while (*a == *b)
	{
		if (a == '\0')
			return 0;
		a++;
		b++;
	}
	/*if (*a > *b)
		return 1;
	if (*a < *b)
		return -1;*/
	return (*a - *b);
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "sqwer";
	strncmp

		return 0;
}