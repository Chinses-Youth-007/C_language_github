#define  _CRT_SECURE_NO_WARNINGS  


//
//#include <stdio.h>
////��ӡ�žų˷���
//int main(void)
// {
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%d", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
// }




//������ͣ�����������
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum = sum + (-1 / i);
//		else
//			sum = sum + (1 / i);
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//�ҵ�1-100�������������а����ж��ٸ�9

#include <stdio.h>
int main(void)
{
	int i = 0;
	int count = 1;
	for (i = 0; i <= 99; i++)
	{
		if (i % 10 == 9)
		{
			count++;
			
		}
	}
	printf("%d\n", count);

	return 0;
}