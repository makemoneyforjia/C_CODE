#include <stdio.h>//�ݹ飻��������ʱ�������ַ�������
int len(char* p)
{
	if (*p!='\0')
	{
		return 1 + len(p + 1);
	}
		return 0;
 }
int main()
{
	char arr[10] = { 0 };
	printf("������һ���ַ���->:\n");
	scanf_s("%s",arr,9);//ע�������±�Խ��
	printf("�ַ����ĳ����ǣ�%d",len(arr));
	return 0;
}