#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

// ���n��쳲���������
//�����ݹ���̸���
//ִ��Ч�ʱȽϵͣ����ںܶ���ظ�����
//int fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
//int main(void)
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fib(n);
//    printf("%d", ret);
//    return 0;
//}


//�ݹ�ķ�����ʱ�������뵽
//int dg(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//��n=1����n=2��ʱ��
//	while (n >=3)// 1 1 2 3 5 8 23 31 54
//	{
//	
//		c = b;
//		b = a;
//		c = a + b;
//		n--;//��ֹ����
//	}
//	return c;//����ֵ
//}
//
//
//
//int main(void)
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int ret = dg(n);
//	printf("%d", ret);
//
//
//	return 0;
//}