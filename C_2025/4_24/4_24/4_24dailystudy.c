#define  _CRT_SECURE_NO_WARNINGS  

#include <stdio.h>
//#include <stdbool.h>
//
////函数
//int addition(int x, int y)
//{
//
//	int sum = x + y;
//	return sum;
//
//}

//
//int addition(int x, int y)
//{
//
//	return x + y;//返回的是表达式，先计算这个的值，返回的是计算结果。
//}
////
//int main()
//{   
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m=addition(a, b);
//	printf("%d", m);
//	return 0;
//}
//判断一个数是否为奇数
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("是奇数");
//	else 
//		printf("是偶数");
//
//}
// 
// 
// 
//bool is_odd(int n)
//{
//	if (n % 2 == 1)
//		return true;
//
//	else
//		return false;
//}
//
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (is_odd(num) == true)
//	{
//		printf("是奇数");
//	}
//	else
//		printf("是偶数");
//	return 0;
//}
//test(void)//返回值类型没有表明的时候编译器视为int 类型
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 10)
//	{
//		printf("hahahaha");
//	}
//	//没有写n<10情况逻辑存在漏洞
//
//	
//
//}
//int main(void)
//{
//	/*int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("是奇数");
//	else 
//		printf("是偶数");*/
//	test();
//	return 0;
//
//}
//
//打印三的倍数的数
//int main(void)
//{
//	int i = 0;
//	
//	for (i = 3; i < 100; i++)
//	{
//		for (int j= 1; j < 100; j++)
//		{
//			if (i==3*j)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}
//三个数找最大值
//int max = 0;
//void compare(int x, int y, int z)
//{	
//	int flag = 0;
//	if (x > y)
//	{
//		max = x;
//		
//	}
//	else
//	{
//		max = y;
//	}
//	if (max > z)
//	{
//		flag = 1;
//		printf("%d", max);
//	}
//	else
//		flag == 0;
//		printf("%d", z);
//}
//int main(void)
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	compare(a, b, c);
//	return 0;
//}
//三个数从小到大排序




//形参地址跟实参地址完全不一样
//三个数比大小先找到最大的，其他的两个，两个两个的比较。
//要想修改函数实参，必须要传递指针，因为指针是存储地址的变量，简单来说就是交换地址。
void compare(int *x, int *y, int *z)
{
	int empty ;
	if (*x<*y)
	{
		empty = *y;
		*y = *x;
		*x = empty;
	}
	if (*x<*z)
	{
		empty = *z;
		*z= *x;
		*x= empty;
	}
	//使第一个数字最大
	if (*y<*z)
	{
		empty = *z;
		*z=*y;
		*y = empty;
	}
	
}
int main(void)
{

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	compare(&a, &b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}