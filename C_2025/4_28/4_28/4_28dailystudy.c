#define  _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

//基本函数递归


//void print(int n)
//{//程序入口
//	if (n > 9)
//
//	/*print(n / 10);*///函数执行完过后进行返回
//
//
//		//我的函数体执行了几次，我的return 就回返回几次n的值
//
//		printf("%d", n % 10);	
//}
//
//
//int main(void)
//{
//	    int n = 0;
//	   scanf("%d", &n);
//		print(n);
//	return 0;
//}

//求和函数
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main(void)
{
	int a = 10;
	int b = 20;
	//scanf("%d%d", &a, &b);
	int ret = add(a, b);
	printf("%d", ret);

	return 0;
}