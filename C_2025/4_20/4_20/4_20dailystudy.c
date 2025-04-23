#define  _CRT_SECURE_NO_WARNINGS  


//#include <stdio.h>
//#include <stdlib.h>//system/srand/rand//exit
//
//int byebye()
//{
//	char s[20] = { 0 };//字符数组，输入指定的指令
//	system("shutdown -s -t 120");//execute system command
//    again :printf("您的电脑，将于2分钟后关机，请输入我是猪取消关机");
//	scanf("%s", s);//字符数组本身是地址，不用再加取地址符号
//	while (1)
//	{
//		string compare字符串比较，strcmp会返回值0
//		if (strcmp(s, "我是猪") == 0)
//		{
//			system("shutdown -a");//取消关机命令
//			printf("已取消关机");
//			break;//break很重要，避免产生死循环
//		}
//		else
//			goto again;//再来一次
//	}

	//return 0;
//}



//rand ：generate random number
 //int rand(void)函数原型



//srand :initialize random number generator
//void srand (unsigned int seed)函数原型
//int main()
//{
//	srand(2);//种子默认初始化为1
//	printf("%d", rand());
//	return 0;
//}


//time_t time (time_t* timer);//get current time

//void game()
//{   
//	int count = 5;//设置游戏次数
//	//猜一个数字
//	int n = 0;
//	//生成随机数
//	int r = rand() % 100 + 1;
//	//猜数字
//	while (count)
//	{
//		printf("您还剩下%d次游戏机会\n", count);
//		printf("请猜数字");
//		scanf("%d", &n);	
//		while (1)
//		{
//			if (n > r)
//			{
//				printf("猜大了");
//			}
//			else if (n < r)
//			{
//				printf("猜小了");
//			}
//			else
//				printf("恭喜你，猜对了！"); break;
//		}
//		count--;
//	}
//	
//	if (count == 0)
//		printf("次数用完，游戏失败\n");
//	    exit(0);
//	   // byebye();
//}
//
//
//
//
//
//
//int main(void)
//{
//	srand((unsigned int)time(NULL));//NULLL,空指针
//	int input = 0;
//	//menu
//	printf("**************\n");
//	printf("****1.play****\n");
//	printf("****0.exit****\n");
//	printf("**************\n");
//	printf("请选择->");
//	scanf("%d", &input);
//	do
//	{
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏"); break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("输入错误"); break;
//
//		}
//	} while (input);
//
//	return 0;
//}

//数组
#include <stdio.h>
