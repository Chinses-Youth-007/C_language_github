#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>


//��ӡ�ض���ͼ������Ҫȷ��������ϵ������Ҫ���ѭ���Ĺ���
//int main()
//{
//	//�ϰ벿�ֵĴ�ӡ
//	int i, j,n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)//����ѭ������
//	{
//		//��ӡ�ո�
//		for (j = 0; j < n -1- i; j++)
//		{
//			printf(" ");
//		}
//		//�����Ŵ�ӡ�Ǻţ�ÿ��ѭ��j�������³�ʼ��Ϊj=0��
//		for (j = 0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");//������ϲ�������ӡ��һ�У�ѭ��7�Σ�����ϰ벿�ֵĴ�ӡ��
//	}
//
//	//�°벿�ֵĴ�ӡ
//	for (i = 0; i < n - 1; i++)//����ѭ������
//	{
//		//��ӡ�ո���
//  		for (j = 0; j <  i + 1; j++)
//		{
//			printf(" ");
//		}
//		//�����Ŵ�ӡ��Ӧ��ϵ���Ǻ�
//		for (j = 0; j<2*(n-1)-2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");//ÿ�β����꣬���л��С�
//	}
//
//	return 0;
//}

//
////int main()
////{//*
//	int all = 0;
//	int empty_bottles = 0;
//	int n = 0;
//	scanf("%d", &n);
//	all = n / 1;
//	int count = 0;
//	if (empty_bottles % 2 == 0)
//	{
//		count = n/ 2;
//	}
//	int total =count + all;
//	printf("%d", total);
//
//
//
//	return 0;*/

//}

//��д��ĸתСд��ĸ��Сд��ĸת��Ϊ��д��ĸ��
int main()

{

	char words[31] = { 0 };
	int i = 0;
	int length = sizeof(words) / sizeof (words[31]);
	scanf("%s", words);
	while (words[i])
	{
		if (words[i] >= 'A' && words[i]<= 'Z')
		{
			words[i]+=32;
		}
		else if (words[i] >= 'a' && words[i] <='z')
		{
			words[i]-=32;

		}
		i++;
	}

	printf("%s", words);
	return 0;
}

