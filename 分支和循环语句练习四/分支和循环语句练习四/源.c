#define _CRT_SECURE_NO_WARNINGS 1
//��д���룬��ʾ����ַ��������ƶ������м��ۡ�

#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to here!";
	char arr2[] = "################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//��Ϣһ��
		Sleep(1000);
		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
		left++;
		right--;
		
	}
	return 0;
}