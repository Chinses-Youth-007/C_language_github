#define  _CRT_SECURE_NO_WARNINGS  

#include <stdio.h>
//#include <stdbool.h>
//
////����
//int addition(int x, int y)
//{
//
//	int sum = x + y;
//	return sum;
//
//}

//
//int addition(int x, int y)
//{
//
//	return x + y;//���ص��Ǳ��ʽ���ȼ��������ֵ�����ص��Ǽ�������
//}
////
//int main()
//{   
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m=addition(a, b);
//	printf("%d", m);
//	return 0;
//}
//�ж�һ�����Ƿ�Ϊ����
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("������");
//	else 
//		printf("��ż��");
//
//}
// 
// 
// 
//bool is_odd(int n)
//{
//	if (n % 2 == 1)
//		return true;
//
//	else
//		return false;
//}
//
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (is_odd(num) == true)
//	{
//		printf("������");
//	}
//	else
//		printf("��ż��");
//	return 0;
//}
//test(void)//����ֵ����û�б�����ʱ���������Ϊint ����
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 10)
//	{
//		printf("hahahaha");
//	}
//	//û��дn<10����߼�����©��
//
//	
//
//}
//int main(void)
//{
//	/*int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("������");
//	else 
//		printf("��ż��");*/
//	test();
//	return 0;
//
//}
//
//��ӡ���ı�������
//int main(void)
//{
//	int i = 0;
//	
//	for (i = 3; i < 100; i++)
//	{
//		for (int j= 1; j < 100; j++)
//		{
//			if (i==3*j)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}
//�����������ֵ
//int max = 0;
//void compare(int x, int y, int z)
//{	
//	int flag = 0;
//	if (x > y)
//	{
//		max = x;
//		
//	}
//	else
//	{
//		max = y;
//	}
//	if (max > z)
//	{
//		flag = 1;
//		printf("%d", max);
//	}
//	else
//		flag == 0;
//		printf("%d", z);
//}
//int main(void)
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	compare(a, b, c);
//	return 0;
//}
//��������С��������




//�βε�ַ��ʵ�ε�ַ��ȫ��һ��
//�������ȴ�С���ҵ����ģ����������������������ıȽϡ�
//Ҫ���޸ĺ���ʵ�Σ�����Ҫ����ָ�룬��Ϊָ���Ǵ洢��ַ�ı���������˵���ǽ�����ַ��
void compare(int *x, int *y, int *z)
{
	int empty ;
	if (*x<*y)
	{
		empty = *y;
		*y = *x;
		*x = empty;
	}
	if (*x<*z)
	{
		empty = *z;
		*z= *x;
		*x= empty;
	}
	//ʹ��һ���������
	if (*y<*z)
	{
		empty = *z;
		*z=*y;
		*y = empty;
	}
	
}
int main(void)
{

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	compare(&a, &b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}