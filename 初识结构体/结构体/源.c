#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ṹ��-�����Լ����������һ������
//��-��-���Ӷ���-�ṹ��
//����-���-����-��ݺ���
//����-����-������-����-���
//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b= {"C���Գ������", 55};
	struct Book* pb = &b;
	//����pb��ӡ���ҵ������ͼ۸�
	//. �ṹ�����.��Ա
	//->�ṹ��ָ��->��Ա
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("����:%s\n", b.name);
	printf("�۸�:%dԪ\n", b.price);
	b.price = 150;
	printf("�޸ĺ�ļ۸�:%dԪ\n", b.price);
	strcpy(b.name, "C++");//strcpy-string copy-�ַ�������-������⺯��-string.h
	printf("�޸ĺ������:%s\n", b.name);
	return 0;
}