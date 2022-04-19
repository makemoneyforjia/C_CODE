#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//test_3 进制转换
#include <assert.h>
void change(int n, int m)
{
	if (n < 0)
	{
		printf("-");
		n = -n;
	}
	int i = 0;
	int a = 0;
	if (n!= 0)
	{
		change(n/m, m);
		a = n % m;
		if (a < 10)
			printf("%d ", a);
		else
			printf("%c ", a + 55);
	}	
}
int main()
{
	int n = 0;
	int r = 0;
	printf("请输入一个整数：->");
	if (scanf("%d", &n) != EOF);
	printf("请输入转换为几进制（2~16）：->");
	if (scanf("%d", &r) != EOF);
	assert(r >= 2 && r <= 16);
	change(n, r);
	return 0;
}
//方法二：
// #include <stdio.h>
//int main() {
//    int number;
//    int system;
//    char s[50];
//    int i;
//    int length;
//    int flag;
//
//    while ((scanf("%d%d", &number, &system)) != EOF) {
//        i = 0;
//        flag = 0;
//
//        if (number < 0) {
//            number = -number;
//            flag = 1;
//        }
//
//        while (number) {
//            if (number % system <= 9) {
//                s[i] = (number % system) + '0';
//            }
//
//            else if (number % system == 10)
//                s[i] = 'A';
//
//            else if (number % system == 11)
//                s[i] = 'B';
//
//            else if (number % system == 12)
//                s[i] = 'C';
//
//            else if (number % system == 13)
//                s[i] = 'D';
//
//            else if (number % system == 14)
//                s[i] = 'E';
//
//            else if (number % system == 15)
//                s[i] = 'F';
//
//            number /= system;
//            i++;
//        }
//        length = i;
//
//        if (flag == 1)
//            printf("-");
//
//        for (i = length - 1; i >= 0; i--)
//            printf("%c", s[i]);
//
//        printf("\n");
//
//
//
//    }
//
//
//    return 0;
//}