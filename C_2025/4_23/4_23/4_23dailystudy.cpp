#define  _CRT_SECURE_NO_WARNINGS  

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)
{/*
	printf("%d\n", strlen("\\a\t\\e\\eeee.f\rr\\"));
	return 0;*/
	/*char ch[5] = { 0 };*/

}





int main(void)
{

	//变长数组
	//int arr[2] = { 0 };
	//int arr2[3] = { 0,1,2 };
	//int n = 9;
	//int arr3[n];//clang支持变长数组，但是变长数组不能初始化，因为数组长度变化

	   char ch[] = "welcome to China!!!";//只能求字符数组，strlen计算字符个数时会将末尾填充的\0
	                                     //加入字符个数，统计的是\0之前的字符个数 空格也是字符
	char ch1[] = { "*******************" };
	int left = 0;
	int right = sizeof(ch) / sizeof(ch[0]) - 2;//计算元素个数，\0也会统计在内
	                                          //减掉\0与一；//学习数组的关键在于操控数组。

	while (left <= right)
	{
		ch1[left] = ch[left];
		ch1[right] = ch[right];
		printf("%s\n", ch1);
	
		Sleep(1000);
		left++;
		right--;//从右往左，递减；
		system("cls");//清理屏幕，清理掉展现过程，直接显示结果
	}

	



	return 0;
}

int main(void)
{
	int data[20] = { 1,2,3,4,5,6,7,8 };
	int s = 6;
	int length = sizeof(data) / sizeof(data[0]);

	bool flag = false;//没找到

	for (int i = 0; i < length; i++)
	{
		if (s == data[i])
		{
			flag = true;//找到
			printf("找到了");
            break;
		}
		
	}
	if (!flag)
		printf("没找到");
	return 0;
}

int main(void)
{


	int i = 0;
	int d[5] = { 1,2,3,4,5 };
	for (i = 0; i < 5; i++)
	{
		if (i == 4)
		{
			printf("%d\n", d[i]);
		}
		break;//如果不在条件判断里，for循环会立即执行break;
	}
	return 0;
}

//
//二分查找法，数字必须有序
//每次查找将数据范围缩小一半，效率更高，尤其适合大型数据查找
//

int main(void)
{
	
	int left = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9 };//升序
	int n =6;
	
	int right = sizeof(arr) / sizeof(arr[0])-1;
	bool found = false;
    int middle = (left + right) / 2;//放置在这，middle未参与循环内的更新，无法缩小范围。
	while (left <= right)//条件判断
	{
		int middle = (left + right) / 2;
		
		if (arr[middle] < n)//目标在右半部分
		{
			left = middle + 1;
		}
		else if (arr[middle] > n)//目标在左半部分
		{
			right = middle - 1;
		}
		else
		{
			printf("zhao dao le\n");
			found = true;//找到之后赋值为1，反之仍然为false
			break;
		}
		
	}
	if (found==false)
		printf("meizhaodao");
	return 0;
}