#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

//һ��������֮�������:0��1��2��
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("����Ϊ��\n");
//	else if (num % 3 == 1)
//		printf("����Ϊһ\n");
//	else
//		printf("����Ϊ2\n");
//	return 0;
//}



// switch case��� switch����ı��ʽ��������������
//case ���  break:����

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("����Ϊ��\n"); break;
//	case 1:
//		printf("����Ϊһ\n"); break;
//	case 2:
//		printf("����Ϊ��\n"); break;
//		����case�޷�ƥ��������ʹ��default;
//	default:
//		printf("����������");
//	}
//
//	return 0;
//}

//defaultû���Ⱥ�˳���Ҫ��
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	default:
//		printf("����������");
//	case 0:
//		printf("����Ϊ��\n"); break;
//	case 1:
//		printf("����Ϊһ\n"); break;
//	case 2:
//		printf("����Ϊ��\n"); break;
//	
//	}
//
//	return 0;
//}
//

//whileѭ��
//���ֵ������//��10ģ10��
//int  main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}



//whileѭ��
//int main(void)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 10; ++i)
//	{
//		sum = sum + i;
//		printf("%d", sum);
//	}
//	return 0;
//}

//int main(void)
//{
//	int i=0, sum = 0;
//	for (i =1; i < 4; i=i+3)
//	{
//		printf("%d ", i);
//		sum = sum + i;
//		printf("%d", sum);
//
//	}
//
//
//	return 0;
//}

//do while
//int main(void)
//{
//	int i = 1;
//	int sum = 0;
//	do
//	{
//		sum = sum + i;
//		i++;
//		printf("%d ", sum);
//
//
//	} while (i <= 5);//ֱ���������������������ִ��do�е���䣻
//	return 0;
//}


//�ж�һ�������Ǽ�λ����//ģ10��
//int main(void)
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	do {
//		count++;
//
//		n /= 10;  ///count==1, 123/10=12,count==2;12/10=1;count==3,1/10=0;
//
//	} while (n);
//	printf("%d", count);
//	return 0;
//}


//���continue��break

//int main(void)
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		i++;
//		if(i == 5)
//			continue;
//
//		printf("%d ", i);
//
//
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		i++;
//		if (i == 5) break;//����ѭ����
//		printf("%d ", i);
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		
//		if (i == 5) break;//����ѭ����
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//

//�ж�һ�����Ƿ������ķ���

//int main(void)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int flag = 1;//�����ʱ��iΪ���������б��
//		for (j = 2; j < i - 1; j++)
//		{
//
//			if (i % j==0)
//			{
//				flag = 0;
//			}
//		}
//		if(flag==1)//�ҵ����������
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <math.h>
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i<=5; i=i+2)//��������Ѱ����������߳�������Ч��
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j<sqrt(i); j++)
//		{
//			if (i%j==0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	
//	return 0;
//}

//goto ���,����ʹ��goto��䣬�������������

//int main(void)
//
//{
//	first:printf("wwww\n");
//next:printf("%d ", 666);
//
//	goto first;
//
//
//	return 0;
//}
//





