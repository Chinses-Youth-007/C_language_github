#define  _CRT_SECURE_NO_WARNINGS  
分数求和
#include <stdio.h>
int main()
{
	int i = 0;
	double sum = 0;//存放所求之和
	for(i=0;i<=100;i++)//遍历输入的数据
	{
		if (i % 2 == 0)//偶数
		{
			sum = 1.0 / i;
		}
		if (i % 2 != 0)奇数
		{
			sum = -1.0 / i;
		}
	}
	printf("%f", sum);

	return 0;
}


//计算输入的数据的最大值与最小值之差
#include <stdio.h>

#include <limits.h>//此头文件定义常量，限制输入数据的范围，避免输入系统和编译器无法实现进行大小比较的数据。
int main()
{
	int num[10] = { 0 };//数组初始化
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&num[i]);//读取输入的数据，需要取地址
	}
	int max = num[0];//定义最大值数组第一个数据
	int min = num[0];//定义最小值数组第一个数据
	for (int i = 0; i <= 9; i++)//进行比较遍历数据 找到最值
	{
		if (num[i] >max)
		{
			max = num[i];
		}
		if (num[i] < min)
		{  
			min = num[i];
		}
	}

	//打印输出所求值
	printf("%d\n", max-min);
	return 0;
}

