#define _CRT_SECURE_NO_WARNINGS 1
auto
break
case
char
continue
default
do
double
else
enum
extern
float
for
goto
if
int
long
register
����� �洢����
1.�Ĵ���
2.���ٻ���
3.�ڴ�
4.Ӳ�� 500G
CPU-���봦����
return
int main()
{
	register int a = 10;//�����a����ɼĴ�������
	int a = 10;
	a = -2;
	//int ����ı������з��ŵ�
	//signed int ;
	unsigned int unm = 0;//��ԶΪ����
	int float//error
	return 0;
}
short
signed
sizeof

1.static���ξֲ�����--�ֲ��������������ڱ䳤
void test()
{
	static int a = 1;//a��һ����̬�ľֲ�����
	a++;
	printf("a = %d\n", a);//2 3 4 5 6
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}
2.static����ȫ�ֱ���--�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û��ʹ����
int main()
{
	//extern - �����ⲿ���ŵ�
	extern int g_val;
	printf("%d\n", g_val);
	return 0;
}
3.static���κ���--Ҳ�Ǹı��˺�����������--��׼ȷ
--�ı��˺�������������
�ⲿ��������->�ڲ���������
//�����ⲿ����
extern int Add(int x, int y);
int main()
{

	return 0;
}

void

struct - �ṹ��ؼ���
switch

typedef - ���Ͷ��� - �����ض���
typedef	unsigned int u_int;
u_int = 20; -- unsigned int num = 20;

union-������/������
unsigned
void
volatile
while


