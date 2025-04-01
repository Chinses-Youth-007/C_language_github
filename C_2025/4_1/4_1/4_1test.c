
#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int num1 = 100;
//
//int main()
//{
//	int num2 = 200;
//
//	return 0;
//}



//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = num1 + num2;
//	printf("%d\n", r);
//
//	return 0;
//}

//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = 3 + num2;
//	printf("%d\n", r);
//
//	return 0;
//}

//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = 3 - num2;
//	printf("%d\n", r);
//
//	return 0;
//}
//
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = 3 * num2;//*
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	int r = 6 / 4; //1.5
//	printf("%d\n", r);
//
//	return 0;
//}

//int main()
//{
//	double r = 6 / 4.0;
//	printf("%lf\n", r);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int score = 5;
//    score = (score / 20.0) * 100;
//    printf("%d\n", score);
//
//    return 0;
//}

//int main()
//{
//	int r = 6 % 4;//6/4得到的余数
//	printf("%d\n", r);
//	return 0;
//}


//int main()
//{
//	int n = 0;//初始化
//	n = 10;//赋值，= 赋值操作符
//
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	b = a + 3;//连续赋值，从右向左依次赋值的。
//	c = b;
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	//a = a + 3;
//	a += 3;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//a -= 3;
//	//a *= 3;//a = a*3;
//	//a /= 3;//a = a/3;
//	a %= 3;//a = a % 3;
//	printf("%d\n", a);
//
//	return 0;
//}

//为什么变量要初始化呢？
//一个局部变量不初始化的时候，他的值是随机值
//一个全局变量不初始化时，他的值会默认初始化为0

//int main()
//{
//	int a;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//a = a - 1;
//	//a -= 1;
//	//a--;
//	--a;
//
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a--;//后置--：先使用，再-1
//	//b=a, a=a-1
//	int b = --a;//前置--：先-1，再使用
//	//a=a-1, b=a
//	printf("a = %d\n", a);//9
//	printf("b = %d\n", b);//9
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//a++;
//	//++a;
//	//int b = a++;//后置++：先使用，后+1
//	//b=a, a=a+1；
//	int b = ++a;//前置++：先+1，后使用
//	//a=a+1, b=a
//	printf("a = %d\n", a);//11
//	printf("b = %d\n", b);//11
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//  //这是一个错误的示范
//	int r = (a++) + (a++) + (a++);
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = -10;
//	printf("%d\n", -a);
//	printf("%d\n", -b);
//
//	return 0;
//}

//
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //printf("Hello\nWorld\n");
//    printf("Hello\n");
//    printf("World\n");
//    //getchar();
//    return 0;
//}

//int main()
//{
//	int ch = getchar();//读取一个字符
//	//printf("%c\n", ch);
//	putchar(ch);//把ch打印在屏幕上
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//int main()
//{
//	printf("there are %d apples\n", 3);
//	return 0;
//}

//int main()
//{
//	printf("%s will come tognight\n", "zhangsan");
//	printf("%s will come tognight\n", "lisi");
//
//	return 0;
//}

//int main()
//{
//	printf("zhangsan says it is 10 o'clock\n");
//	printf("%s says it is %d o'clock\n", "zhangsan", 10);
//	printf("%s says it is %d o'clock\n", "lisi", 20);
//
//
//	return 0;
//}


//int main()
//{
//	int num1 = -10;
//	printf("%d\n")