#define  _CRT_SECURE_NO_WARNINGS  



#include <stdio.h>
//2!+1!+3!=9
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n<=3;n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d", sum);
//
//	return 0;
//}
//这段代码中的ret没有参与每次循环中的重置环节 不然ret就会使用上一次运行得到的结果
// 可以通过调试发现问题所在
//调试过程需要观察变量查找问题所在 一步步缩小范围








//2!+1!+3!=9
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//存放和，如果是零，所有数字与零相乘直接变成了0
//	int sum = 0;
//	for (n = 1;n<=3;n++)
//	{
//		ret = 1;//使ret在每次计算不同数字的阶乘的时候能够重置，避免上一次的结果影响
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;//存放每一次的阶乘结果
//	}
//	
//	printf("%d", sum);
//
//	return 0;
//}









//int main(void)
//{
//	
//	int n = 0;
//	int ret = 1;//存放和，如果是零，所有数字与零相乘直接变成了0
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		//每一次的ret都得到到了刷新
//		ret = ret * n;
//		sum = sum + ret;
//
//
//	}
//	printf("%d", sum);
//
//	return 0;
//}//大大提高了程序的运行效率
//简化了运行过程中的步骤



//#include <windows.h>
//int main(void)
//{
//
//    int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组分配地址从低地址到高地址
//	
//
//
//
//	for (i = 0; i <= 12; i++)//导致栈区溢出，栈区存放局部变量与形式参数
//							//栈区使用内存从高到低进行
//	{
//		arr[i] = i;
//		//printf("hahahaha\n");
//		printf("%p\n", arr[12]);
//		printf("%p", &i);
//		break;
//		Sleep(500);//睡眠函数，需要调用头文件windows.h
//	}
//}
////
//	printf("&arr[1]=%p\n", arr[1]);
//	printf("&i=%p", &i);
//
//
//	return 0;
//
//}

//
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
// 打印出的虚拟地址可能与监视窗口变量不一样，可能与地址映射
//	printf("&arr[1]=%p\n", &arr[1]);
//	printf("&arr[2]=%p\n", &arr[2]);
//	printf("&arr[3]=%p\n", &arr[3]);
//	printf("&arr[4]=%p\n", &arr[4]);
//	printf("&i=%p", &i);
//	return 0;
//




//函数递归
//大事化小 小事情化了 直至最后解决所有问题
// 计算三的阶乘 需要知道二的阶乘，算二的阶乘需要知道一的阶乘
//先递推 后回归//回归后内存释放，避免内存泄漏


int nnn(n)
{
	if (n == 0)//限制条件
		return 1;
	else
		return  nnn(n - 1) * n;
}





int main(void)
{
	int n = 0;
	scanf("%d", &n);

	int ret = nnn(n);//每调用一次函数就会占用栈区的内存，很容易使内存充满

	printf("%d", ret);

	return 0;
}