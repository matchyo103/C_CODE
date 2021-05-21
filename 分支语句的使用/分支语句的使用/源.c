#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()

{
	//多分支
	//1.if语句
	int a = 0;
	;//是语句-空语句
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else
		printf("壮年\n");
	int b = 0;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	//else和距离它最近的未配对的if语句配对
	//练习1.
	//输出1-100之间的奇数
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
		i++;
	}

	//2.switch语句
	int day = 0;
	switch (day)//判断结果的取值
	{
	case 1://整形常量表达式
		;
	case 2:
		;
		break;
	case 3:
		;
	default:
		printf("输入错误\n");
	}
	//练习2.
	int n = 1, m = 2;
	switch (n)
	{
	case 1: m++;
	case 2: n++;
	case 3:
		switch (m)
		{//switch允许嵌套使用
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