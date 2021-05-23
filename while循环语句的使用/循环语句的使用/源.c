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
		//continue跳出本次循环，执行下一次循环
		//break;直接结束循环
		printf("%d ", i);
	}
	printf("\n");
	//int ch = 0;
	////EOF - end of file文件结束标志
	//while (ch = getchar() != EOF)
	//{
	//	putchar(ch);
	//}
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:");
	scanf("%s", &password);//输入密码，并存放在password数组中
	printf("%s\n", password);
	//缓存区还剩余一个'\n'
	//读取一下'\n'
	getchar();
	printf("请确认(Y\N):");
	ret = getchar();
	if (ret == 'Y')
		printf("正确\n");
	else
		printf("错误\n");
	return 0;
}