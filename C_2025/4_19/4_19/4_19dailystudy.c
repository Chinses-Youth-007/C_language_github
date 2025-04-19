#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

//一个数除三之后的余数:0，1，2；
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("余数为零\n");
//	else if (num % 3 == 1)
//		printf("余数为一\n");
//	else
//		printf("余数为2\n");
//	return 0;
//}



// switch case语句 switch里面的表达式必须是整型类型
//case 入口  break:出口

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("余数为零\n"); break;
//	case 1:
//		printf("余数为一\n"); break;
//	case 2:
//		printf("余数为二\n"); break;
//		所有case无法匹配的情况，使用default;
//	default:
//		printf("请重新输入");
//	}
//
//	return 0;
//}

//default没有先后顺序的要求；
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	default:
//		printf("请重新输入");
//	case 0:
//		printf("余数为零\n"); break;
//	case 1:
//		printf("余数为一\n"); break;
//	case 2:
//		printf("余数为二\n"); break;
//	
//	}
//
//	return 0;
//}
//

//while循环
//数字倒序输出//余10模10法
//int  main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}



//while循环
//int main(void)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 10; ++i)
//	{
//		sum = sum + i;
//		printf("%d", sum);
//	}
//	return 0;
//}

//int main(void)
//{
//	int i=0, sum = 0;
//	for (i =1; i < 4; i=i+3)
//	{
//		printf("%d ", i);
//		sum = sum + i;
//		printf("%d", sum);
//
//	}
//
//
//	return 0;
//}

//do while
//int main(void)
//{
//	int i = 1;
//	int sum = 0;
//	do
//	{
//		sum = sum + i;
//		i++;
//		printf("%d ", sum);
//
//
//	} while (i <= 5);//直到不符合这个条件，不再执行do中的语句；
//	return 0;
//}


//判断一个数字是几位数；//模10法
//int main(void)
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	do {
//		count++;
//
//		n /= 10;  ///count==1, 123/10=12,count==2;12/10=1;count==3,1/10=0;
//
//	} while (n);
//	printf("%d", count);
//	return 0;
//}


//理解continue与break

//int main(void)
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		i++;
//		if(i == 5)
//			continue;
//
//		printf("%d ", i);
//
//
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		i++;
//		if (i == 5) break;//终制循环；
//		printf("%d ", i);
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		
//		if (i == 5) break;//终制循环；
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//

//判断一个数是否素数的方法

//int main(void)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int flag = 1;//假设此时的i为素数，进行标记
//		for (j = 2; j < i - 1; j++)
//		{
//
//			if (i % j==0)
//			{
//				flag = 0;
//			}
//		}
//		if(flag==1)//找到素数并输出
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <math.h>
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i<=5; i=i+2)//奇数里面寻找素数，提高程序运行效率
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j<sqrt(i); j++)
//		{
//			if (i%j==0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	
//	return 0;
//}

//goto 语句,谨慎使用goto语句，避免语句乱跳。

//int main(void)
//
//{
//	first:printf("wwww\n");
//next:printf("%d ", 666);
//
//	goto first;
//
//
//	return 0;
//}
//





