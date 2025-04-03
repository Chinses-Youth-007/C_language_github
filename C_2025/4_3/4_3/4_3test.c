#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>


//复习scanf函数读取,c++.com可详见解释
int main()
{
	int a, b = 0;
	while(scanf("%d%d", &a, &b)!=EOF)
	{//此处scanf只会读取一组数据，若输入多组数据则需要用到循环，当遇到eof时，会停止读取。
		if (a > b)
		{
			printf("%d>%d", a, b);
		}
		else if (a < b)
		{
			printf("%d<%d", a, b);
		}
		else if (a == b)
		{
			printf("%d=%d", a, b);
		}
	}
	return 0;
}

//51知识点aboutC
//今日所学
//模块化编程
//.h/.c/文件分开写，当需要使用函数时，声明相应头文件
//#格式  #ifndef__()_H_//防止重复定义
//      #define __()_H_ 
//      声明函数；
//		#endif
//     大多数函数具有返回值，需要学会考虑 
///  long long int -2的63次方到2的63次方减一；