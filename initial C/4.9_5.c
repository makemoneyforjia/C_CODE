#include <stdio.h>//��ŵ������
int m = 1;
void print(int n, char a, char b)
{
 
    printf("���ǵ�%2d��  ", m++);
    printf("����%d�����ӣ���%cŲ��%c��\n", n, a, b);
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
    printf("�м�������: \n");
    scanf_s("%d", &n);
    Tower(n, 'A', 'B', 'C');
    return 0;
}