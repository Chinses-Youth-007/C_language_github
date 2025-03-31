#define  _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>
int main()
{
	int m=0;
	int n=0;
	int k = 0;
	scanf("%d %d", &m, &n);
	while (k = m % n)
	{
		m = n;
		n = k;
	}
	printf("%d", n);
}