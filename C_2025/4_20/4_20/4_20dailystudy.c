#define  _CRT_SECURE_NO_WARNINGS  


//#include <stdio.h>
//#include <stdlib.h>//system/srand/rand//exit
//
//int byebye()
//{
//	char s[20] = { 0 };//�ַ����飬����ָ����ָ��
//	system("shutdown -s -t 120");//execute system command
//    again :printf("���ĵ��ԣ�����2���Ӻ�ػ���������������ȡ���ػ�");
//	scanf("%s", s);//�ַ����鱾���ǵ�ַ�������ټ�ȡ��ַ����
//	while (1)
//	{
//		string compare�ַ����Ƚϣ�strcmp�᷵��ֵ0
//		if (strcmp(s, "������") == 0)
//		{
//			system("shutdown -a");//ȡ���ػ�����
//			printf("��ȡ���ػ�");
//			break;//break����Ҫ�����������ѭ��
//		}
//		else
//			goto again;//����һ��
//	}

	//return 0;
//}



//rand ��generate random number
 //int rand(void)����ԭ��



//srand :initialize random number generator
//void srand (unsigned int seed)����ԭ��
//int main()
//{
//	srand(2);//����Ĭ�ϳ�ʼ��Ϊ1
//	printf("%d", rand());
//	return 0;
//}


//time_t time (time_t* timer);//get current time

//void game()
//{   
//	int count = 5;//������Ϸ����
//	//��һ������
//	int n = 0;
//	//���������
//	int r = rand() % 100 + 1;
//	//������
//	while (count)
//	{
//		printf("����ʣ��%d����Ϸ����\n", count);
//		printf("�������");
//		scanf("%d", &n);	
//		while (1)
//		{
//			if (n > r)
//			{
//				printf("�´���");
//			}
//			else if (n < r)
//			{
//				printf("��С��");
//			}
//			else
//				printf("��ϲ�㣬�¶��ˣ�"); break;
//		}
//		count--;
//	}
//	
//	if (count == 0)
//		printf("�������꣬��Ϸʧ��\n");
//	    exit(0);
//	   // byebye();
//}
//
//
//
//
//
//
//int main(void)
//{
//	srand((unsigned int)time(NULL));//NULLL,��ָ��
//	int input = 0;
//	//menu
//	printf("**************\n");
//	printf("****1.play****\n");
//	printf("****0.exit****\n");
//	printf("**************\n");
//	printf("��ѡ��->");
//	scanf("%d", &input);
//	do
//	{
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ"); break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("�������"); break;
//
//		}
//	} while (input);
//
//	return 0;
//}

//����
#include <stdio.h>
