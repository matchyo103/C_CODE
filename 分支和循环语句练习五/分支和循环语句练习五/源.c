#define _CRT_SECURE_NO_WARNINGS 1
// 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。
#include<stdio.h>

int main()
{
	char password[10];
	int i = 0;
	for (int i = 0; i <3; i++)
	{
		printf("请输入密码（3次机会):\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
			printf("密码错误\n");
		
	}
	if (i == 3)
	{
		printf("机会用完，退出程序\n");
	}
	
	return 0;
}