#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	/*printf("c:\test\32\test.c")
	//\t-ˮƽ�Ʊ��
	//\������д��������ʺ�ʱʹ��
	//\'���ڱ�ʾ�ַ�����'
	//\"���ڱ�ʾһ���ַ����ڲ���˫����
	//\\���ڱ�ʾһ����б�ܣ���ֹ��������λһ��ת�����з�
	//\32-32��2��8��������-�൱��һ���ַ���
	*/   //��ע�Ͳ���Ƕ��ע��
	printf("%c\n", '\32');
	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
	//a-97 
	//A-65
	//ASCII����
	char arr1[] = "abc";//����
	//"abc"-'a' 'b' 'c' '\0'-'\0'�ַ����Ľ�����־�������ַ���������
	char arr2[] = { 'a', 'b', 'c' };
	//'\0'-0
	//'a'-97
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));
	//strlen-string length-�����ַ������ȵ�
	printf("%d\n", strlen(arr2));
	//char�ַ�������
	//"hello bit"
	//"";���ַ���
	printf("%d\n", strlen("c:\test\32\test.c"));//13
	return 0;
}