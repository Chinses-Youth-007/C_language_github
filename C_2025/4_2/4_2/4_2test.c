#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
int main()
{
	int a = (int)9.98;
	printf("%d\n", a);
	int m = 9.88;
	printf("%d\n", m);//强制类型转换会丢失部分数据，8字节的数据放进存放四个字节的空间

	int ch = getchar();//键盘上读取一个字符
	putchar(ch);//输出读取的字符
	getchar();
	printf("%d\n", 6231);
	printf("%-8d", 6231);//-号左对齐，+号右对齐
	getchar();
	printf("%8d", 6231);
	getchar();

	printf("%f\n", 45.55);
	printf("%10.3f", 45.55);//占位符号
	getchar();

	//scanf函数、、、


	int a = 0;
	int b = 0;
	float c = 0.0f;
	int m=scanf("%d %d %f", &a, &b, &c);//返回值为int类型
	printf("%d %d %f\n", a, b, c);
	printf("%d", m);
	return 0;





	return 0;
}