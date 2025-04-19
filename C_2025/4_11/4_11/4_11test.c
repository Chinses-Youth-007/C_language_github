#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>


//打印特定的图案，需要确定数量关系，并且要理解循环的过程
//int main()
//{
//	//上半部分的打印
//	int i, j,n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)//控制循环次数
//	{
//		//打印空格
//		for (j = 0; j < n -1- i; j++)
//		{
//			printf(" ");
//		}
//		//紧接着打印星号，每次循环j都会重新初始化为j=0；
//		for (j = 0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");//完成以上操作，打印下一行，循环7次，完成上半部分的打印。
//	}
//
//	//下半部分的打印
//	for (i = 0; i < n - 1; i++)//控制循环次数
//	{
//		//打印空格数
//  		for (j = 0; j <  i + 1; j++)
//		{
//			printf(" ");
//		}
//		//紧接着打印对应关系的星号
//		for (j = 0; j<2*(n-1)-2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");//每次操作完，进行换行。
//	}
//
//	return 0;
//}

//
////int main()
////{//*
//	int all = 0;
//	int empty_bottles = 0;
//	int n = 0;
//	scanf("%d", &n);
//	all = n / 1;
//	int count = 0;
//	if (empty_bottles % 2 == 0)
//	{
//		count = n/ 2;
//	}
//	int total =count + all;
//	printf("%d", total);
//
//
//
//	return 0;*/

//}

//大写字母转小写字母，小写字母转化为大写字母。
int main()

{

	char words[31] = { 0 };
	int i = 0;
	int length = sizeof(words) / sizeof (words[31]);
	scanf("%s", words);
	while (words[i])
	{
		if (words[i] >= 'A' && words[i]<= 'Z')
		{
			words[i]+=32;
		}
		else if (words[i] >= 'a' && words[i] <='z')
		{
			words[i]-=32;

		}
		i++;
	}

	printf("%s", words);
	return 0;
}

