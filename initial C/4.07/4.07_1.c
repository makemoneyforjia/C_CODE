#include <stdio.h>//1~100�ж��ٸ�����9
int main()
{
	int i = 0, n = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
			++n;
		if (i / 10 == 9)
			++n;
	}
	printf("1��100��9�ĸ���Ϊ%d", n);
	return 0;
}