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
计算机 存储数据
1.寄存器
2.高速缓存
3.内存
4.硬盘 500G
CPU-中央处理器
return
int main()
{
	register int a = 10;//建议把a定义成寄存器变量
	int a = 10;
	a = -2;
	//int 定义的变量是有符号的
	//signed int ;
	unsigned int unm = 0;//永远为正数
	int float//error
	return 0;
}
short
signed
sizeof

1.static修饰局部变量--局部变量的生命周期变长
void test()
{
	static int a = 1;//a是一个静态的局部变量
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
2.static修饰全局变量--改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法使用了
int main()
{
	//extern - 声明外部符号的
	extern int g_val;
	printf("%d\n", g_val);
	return 0;
}
3.static修饰函数--也是改变了函数的作用域--不准确
--改变了函数的链接属性
外部链接属性->内部链接属性
//声明外部函数
extern int Add(int x, int y);
int main()
{

	return 0;
}

void

struct - 结构体关键字
switch

typedef - 类型定义 - 类型重定义
typedef	unsigned int u_int;
u_int = 20; -- unsigned int num = 20;

union-联合体/共用体
unsigned
void
volatile
while


