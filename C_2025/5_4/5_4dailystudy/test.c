#define  _CRT_SECURE_NO_WARNINGS  


//
//#include <stdio.h>
////打印九九乘法表
//int main(void)
// {
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%d", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
// }




//分数求和，函数分正负
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum = sum + (-1 / i);
//		else
//			sum = sum + (1 / i);
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//找到1-100的所有整数里中包含有多少个9

#include <stdio.h>
int main(void)
{
	int i = 0;
	int count = 1;
	for (i = 0; i <= 99; i++)
	{
		if (i % 10 == 9)
		{
			count++;
			
		}
	}
	printf("%d\n", count);

	return 0;
}