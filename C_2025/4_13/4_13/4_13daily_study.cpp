#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
int a, b = 0;
int swap(int a,int b)
{
	int empty = 0;
	empty = b;
	b = a;
	a = empty;
}
int main()
{
	scanf("%d %d", &a, &b);
	swap(a, b);
	printf("%d %d", a, b);
	return 0;
}