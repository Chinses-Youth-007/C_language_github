#define  _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>
int main()
{   
	//转义符：\':转变原有符号的含义
	printf("%c", '\'');

	printf( "abc\r");//光标回到开头

	printf("\"");//打印单个双引号
	
	printf("c\test\tue\test");
	
	getchar();//键盘上读取字符
	
	printf("23456\b\b");//不加getchar()会覆盖掉5
	
	getchar();
	
	getchar();//控制光标位置
	printf("abcdefg\rxyz");//不加getchar()将会覆盖a
	printf("%d", '\130');
	getchar();//使光标回到a前面

	////布尔类型
	#include <stdbool.h>
	bool flag = false;
	if (flag)
	{
		printf("1");
	}
	else
		printf("0");


	//sizeof计算字节数，如果要打印的话，需要格式为%zd//返回值类型无符号，size_t为其类型
	
	//sizeof(类型)

	int q = 900;
	printf("%zd\n", sizeof(q));
	printf("%zu\n", sizeof(q));
	printf("%zd\n", sizeof(2 + 3));//(类型）
	printf("%zd\n", sizeof 3 + 3);//从左到右计算，4+3=7



	//变量问题 全局变量  局部变量
	//全局变量全局可用   只在相应的代码模块起作用，局部与全局相同时就近原则。
	float  mner = 3.2;
	double dd = 9.89;

	short int q;
	long int a;
	long long int;

	//变量名不以数字开头，而且不能超过63个字符
	// 
	//类型的字节数会因为编译器不同有所差异。


	//int<---->signed int
		  //char 类型有无符号与编译器相关。




	


	return 0;
}
