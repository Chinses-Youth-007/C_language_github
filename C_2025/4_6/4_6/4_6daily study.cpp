#define  _crt_secure_no_warnings  
#include <stdio.h>



//
//int data[10] = { 0 };
//int length = sizeof(data) / sizeof(data[10]);
//int main()
//{
//
//	for (int i = 0; i < length; i++)
//	{
//		scanf("%d", &data[i]);
//	}
//	for (int i = 0; i < length-1; i++)//����������֣����������Ĵν����������鳤����Ҫ����һ�Σ�������������
//	{s
//		for (int j = 0; j < length-1- i; j++)//length-1,Ϊ�˷�ֹ����Խ�磬����������û�����ݿ��ԱȽϣ���Ϊÿ�αȽϵĶ�����һ��Ԫ������һ��Ԫ��
//			          i=0;length=10;......�������һ�����㵽10��һ��ʮ�Σ���ʵ��10-1��ѭ���Ѿ���������ҵ����ŵ��������ұߣ�ֻ��Ҫ�Ƚ����������֣����9�ο����ҵ����ֵ���Դ�����
//		{			//5  ----   //4
//			if (data[j] > data[j + 1])
//			{
//				int empty = data[j + 1];
//				data[j + 1] = data[j];
//				data[j]=empty;
//			}
//		}
//	}
//	for (int i = 0; i < length; i++)
//	{
//		printf("%d ", data[i]);
//	}
//
//
//	return 0;
//}


//pratice

////int main()
//{
//	char thieves = 0;//char����
//	for (thieves = 'A'; thieves <= 'D'; thieves++)//������п����ԣ����������֤
//	{
//		if( (thieves!='A') + (thieves =='C') + (thieves =='D') + (thieves !='D') == 3)//������֪���������ж�
//		{
//			printf("С͵�ǣ�%c", thieves);
//		}
//	}
//	return 0;
//}





















