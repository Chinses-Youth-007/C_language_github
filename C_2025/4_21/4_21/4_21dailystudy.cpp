#define  _CRT_SECURE_NO_WARNINGS  


#include<stdio.h>
//int main(void)
//{
	//int i = 0;
	//int arr1[5] = { 1,2,3,4,5};//完全初始化
	//int arr2[5] = { 1,2,4 };//不完全初始化

	////sizeof计算长度
	//int num = 10;
	//printf("%zd\n", sizeof(num));
	//printf("%zd\n", sizeof(int));
	//printf("%d", arr1[0]);//整型数组的访问
	//arr1[0] = 100;
	//printf("%d", arr1[0]);

	////char类型数组
	//char data[4] = { 'h','e','l','\0'};//不会自动填充\0
	//printf("%s\n", data);
	//char s[9] = "hello";
	//printf("%s\n", s);

	////数组只要初始化了，可以省略数字大小
	//int arr4[] = { 1,2,3,4,5 };
	////数组大小会根据初始化内容自行判断

	//for (i = 0; i < 5; i++)
	//{
	//printf("arr[%d]=%p\n", i, &arr1[i]);

	//}
	////一维数组数据是连续在内存中存放的，
	//int arr5[] = {0};
	//int arr6[6] = {0};
	//printf("%d", arr6[4]);



//
//	return 0;
//}
//int main(void)
//{
//	int data[10] = { 0 };
//	//sizeof(data)数组总字节数
//	//length,数组元素个数（数组长度）
//	int length = sizeof(data) / sizeof(data[0]);//sizeof(data[0]一个元素的字节数）
//	printf("%d", length);
//	return 0;
//}
//
//int main(void)
//{
//	/*int age = 19;
//	printf("%zu", sizeof(int));*/
//
//	//二维数组
//	int arr1[][5] = { 0 };//可以没有行，但是必须要列
//	int arr2[3][5] = { {2,3},{3,4},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)//行数
//	{
//		for (int j = 0; j < 5; j++)//列数
//		{
//			printf("%d", arr2[i][j]);
//		 }
//		printf("\n");
//	}
//
//	return 0;
//}