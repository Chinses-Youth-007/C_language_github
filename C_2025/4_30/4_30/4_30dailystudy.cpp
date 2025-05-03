#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

// 求第n个斐波拉契数列
//函数递归过程复杂
//执行效率比较低，存在很多的重复计算
//int fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
//int main(void)
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fib(n);
//    printf("%d", ret);
//    return 0;
//}


//递归的方法有时候不容易想到
//int dg(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//当n=1或者n=2的时候
//	while (n >=3)// 1 1 2 3 5 8 23 31 54
//	{
//	
//		c = b;
//		b = a;
//		c = a + b;
//		n--;//截止条件
//	}
//	return c;//返回值
//}
//
//
//
//int main(void)
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int ret = dg(n);
//	printf("%d", ret);
//
//
//	return 0;
//}