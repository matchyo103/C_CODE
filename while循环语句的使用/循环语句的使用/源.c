#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	/*while(1)
	printf("hehe\n");*/
	int i = 1;
	while (i <= 10)
	{
		//printf("%d ", i);
		i++;
		if (i == 5)
			continue;
		//continue��������ѭ����ִ����һ��ѭ��
		//break;ֱ�ӽ���ѭ��
		printf("%d ", i);
	}
	printf("\n");
	//int ch = 0;
	////EOF - end of file�ļ�������־
	//while (ch = getchar() != EOF)
	//{
	//	putchar(ch);
	//}
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:");
	scanf("%s", &password);//�������룬�������password������
	printf("%s\n", password);
	//��������ʣ��һ��'\n'
	//��ȡһ��'\n'
	getchar();
	printf("��ȷ��(Y\N):");
	ret = getchar();
	if (ret == 'Y')
		printf("��ȷ\n");
	else
		printf("����\n");
	return 0;
}