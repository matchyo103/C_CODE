#define _CRT_SECURE_NO_WARNINGS 1
//���� n�Ľ׳ˡ�
#include<stdio.h>

int main()
{
	int m = 0,n = 0;
	printf("������Ŀ��ֵ:\n");
	scanf("%d", &m);
	printf("����%d�Ľ׳�\n", m);
	int ret = 1;
	for (n = 1; n <= m; n++)
	{
		ret = ret * n;
	}
	printf("%d\n", ret);
	return 0;
}