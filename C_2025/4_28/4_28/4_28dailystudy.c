#define  _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

//���������ݹ�


//void print(int n)
//{//�������
//	if (n > 9)
//
//	/*print(n / 10);*///����ִ���������з���
//
//
//		//�ҵĺ�����ִ���˼��Σ��ҵ�return �ͻط��ؼ���n��ֵ
//
//		printf("%d", n % 10);	
//}
//
//
//int main(void)
//{
//	    int n = 0;
//	   scanf("%d", &n);
//		print(n);
//	return 0;
//}

//��ͺ���
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main(void)
{
	int a = 10;
	int b = 20;
	//scanf("%d%d", &a, &b);
	int ret = add(a, b);
	printf("%d", ret);

	return 0;
}