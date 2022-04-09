#include <stdio.h>//汉诺塔问题
int m = 1;
void print(int n, char a, char b)
{
 
    printf("这是第%2d步  ", m++);
    printf("将第%d个盘子，从%c挪到%c上\n", n, a, b);
}

void Tower(int n,char a,char b, char c)
{	
    if (n == 1)
        print(n, a, c);
    else
    {
        Tower(n - 1, a,c, b);
        print(n, a, c);
        Tower(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    printf("有几个盘子: \n");
    scanf_s("%d", &n);
    Tower(n, 'A', 'B', 'C');
    return 0;
}