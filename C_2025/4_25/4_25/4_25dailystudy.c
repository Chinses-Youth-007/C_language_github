#define  _CRT_SECURE_NO_WARNINGS  //宏定义
#include <stdio.h>
#include <stdlib.h>

//typedef给类型取别名
 //typedef enum WEEK {day1 = 1,day2,day3} fw;//fw为类型名字，把类型名enum WEEK改为fw
//enum 枚举名 { 变量1，变量2，变量3}
 typedef enum//枚举
 {
	 day1=1,
	 day2,
	 day3
 }fw;//定义类型名字

 //指针可以计算
int main(void)
{
	
	//type *p,指针定义申明的方式
	fw DAYS = 1;
	int* p=0;//指针存放地址的变量，可以操控地址
	int a = 90;
	p = &a;//指针指向a的地址
	printf("%d\n", a);//90
	int w = *p;
	*p = 30;
	printf("%d\n",*p);//30
	printf("%d\r\n", DAYS);//1
	//getchar();
	int* u =  malloc(sizeof(int));//malloc分配内存
	{
		if (p != NULL)
		{
			*u = 90;
			printf("%d", *u);
			free(u);//释放内存
		}
	}

}
#define l 0

int main(void)
{
	



	return 0;
}