#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()

{
	//���֧
	//1.if���
	int a = 0;
	;//�����-�����
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else
		printf("׳��\n");
	int b = 0;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	//else�;����������δ��Ե�if������
	//��ϰ1.
	//���1-100֮�������
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
		i++;
	}

	//2.switch���
	int day = 0;
	switch (day)//�жϽ����ȡֵ
	{
	case 1://���γ������ʽ
		;
	case 2:
		;
		break;
	case 3:
		;
	default:
		printf("�������\n");
	}
	//��ϰ2.
	int n = 1, m = 2;
	switch (n)
	{
	case 1: m++;
	case 2: n++;
	case 3:
		switch (m)
		{//switch����Ƕ��ʹ��
		case 1: n++;
		case 2: m++;
			n++;
			break;
		}
	case 4: m++;
		break;
	default:
		break;
	}

	return 0;
}