#define  _CRT_SECURE_NO_WARNINGS  


#include<stdio.h>
//
//#include <stdio.h>
//
//int main()
//{
//	int data[10] = { 0 };
//	int length = sizeof(data) / sizeof(data[10]);
//	int i, j = 0;
//	int empty = 0;
//
//	for (i = 0; i < length; i++)
//	{
//		scanf("%d",&data[i]);
//	}
//
//	for (i = 0; i < length - 1; i++)//控制排序次数 ————例如五个数字只需要排四次，因为第一次排序就已经把最大的派到了最后，不用在拿它跟其他数比较，其他进行时一次从小到大排列
//
//	{
//		for (j = 0; j < length - 1 - i; j++)//length-1为了防止数组越界，控制下标;//代表一共需要比较n-1对；
//			//i每增加1，需要比较的对数就减少一次
//		{
//			if (data[j] > data[j + 1])
//			{
//				int empty = 0;
//				empty = data[j + 1];
//				data[j + 1] = data[j];
//				data[j] = empty;
//			}
//		}
//	}
//
//
//
//	for (i = 0; i < length; i++)
//	{
//		printf("%d ", data[i]);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char s[3] = { 0 };
//		scanf("%s", s);
//	printf("%s", s);
////}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	switch (age)
//	{
//	case 20:
//		printf("清纯男大"); break;
//	case 50:
//		printf("中年"); break;
//	case 40:
//	case 45:
//		printf("zhuangnian");
//
//
//	}
//
//	return 0;
//
//
//
//}
//
//倒序输出，%10再/10；
int main(void)
{
	int number = 0;
	scanf("%d", &number);
	while (number)//number!=0;
	{
		printf("%d", number % 10);
		number /= 10;
	}

	return 0;
}



