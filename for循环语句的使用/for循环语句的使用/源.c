#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	for (int i = 1; i <= 10; i++)
		//��ʼ�� �ж� ѭ��
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	printf("\n");
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//10��ѭ��
	//10�δ�ӡ
	//10��Ԫ��
	int o = 0;
	for (o; o < 10; o++)
		printf("%d\n", arr[o]);
	//������
	int j = 0;
	int k = 0;
	for (j = 0, k = 0; k = 0; j++, k++)
		k++;
	//�жϲ�ִ�У�ѭ��0��
	return 0;
}