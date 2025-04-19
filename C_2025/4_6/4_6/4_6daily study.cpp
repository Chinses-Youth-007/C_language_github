#define  _crt_secure_no_warnings  
#include <stdio.h>



//
//int data[10] = { 0 };
//int length = sizeof(data) / sizeof(data[10]);
//int main()
//{
//
//	for (int i = 0; i < length; i++)
//	{
//		scanf("%d", &data[i]);
//	}
//	for (int i = 0; i < length-1; i++)//例如五个数字，进行排序四次解决，因此数组长度需要减掉一次，控制排序轮数
//	{s
//		for (int j = 0; j < length-1- i; j++)//length-1,为了防止数组越界，避免最后的数没有数据可以比较，因为每次比较的都是上一个元素与下一个元素
//			          i=0;length=10;......如果不减一，从零到10，一共十次，而实际10-1次循环已经把最大数找到，放到数据最右边，只需要比较其他的数字，因此9次可以找到最大值，以此类推
//		{			//5  ----   //4
//			if (data[j] > data[j + 1])
//			{
//				int empty = data[j + 1];
//				data[j + 1] = data[j];
//				data[j]=empty;
//			}
//		}
//	}
//	for (int i = 0; i < length; i++)
//	{
//		printf("%d ", data[i]);
//	}
//
//
//	return 0;
//}


//pratice

////int main()
//{
//	char thieves = 0;//char类型
//	for (thieves = 'A'; thieves <= 'D'; thieves++)//穷举所有可能性，逐个进行验证
//	{
//		if( (thieves!='A') + (thieves =='C') + (thieves =='D') + (thieves !='D') == 3)//根据已知条件进行判断
//		{
//			printf("小偷是：%c", thieves);
//		}
//	}
//	return 0;
//}





















