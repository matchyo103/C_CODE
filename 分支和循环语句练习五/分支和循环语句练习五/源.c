#define _CRT_SECURE_NO_WARNINGS 1
// ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����
#include<stdio.h>

int main()
{
	char password[10];
	int i = 0;
	for (int i = 0; i <3; i++)
	{
		printf("���������루3�λ���):\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else
			printf("�������\n");
		
	}
	if (i == 3)
	{
		printf("�������꣬�˳�����\n");
	}
	
	return 0;
}