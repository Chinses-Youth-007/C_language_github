#define  _CRT_SECURE_NO_WARNINGS  

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)
{/*
	printf("%d\n", strlen("\\a\t\\e\\eeee.f\rr\\"));
	return 0;*/
	/*char ch[5] = { 0 };*/

}





int main(void)
{

	//�䳤����
	//int arr[2] = { 0 };
	//int arr2[3] = { 0,1,2 };
	//int n = 9;
	//int arr3[n];//clang֧�ֱ䳤���飬���Ǳ䳤���鲻�ܳ�ʼ������Ϊ���鳤�ȱ仯

	   char ch[] = "welcome to China!!!";//ֻ�����ַ����飬strlen�����ַ�����ʱ�Ὣĩβ����\0
	                                     //�����ַ�������ͳ�Ƶ���\0֮ǰ���ַ����� �ո�Ҳ���ַ�
	char ch1[] = { "*******************" };
	int left = 0;
	int right = sizeof(ch) / sizeof(ch[0]) - 2;//����Ԫ�ظ�����\0Ҳ��ͳ������
	                                          //����\0��һ��//ѧϰ����Ĺؼ����ڲٿ����顣

	while (left <= right)
	{
		ch1[left] = ch[left];
		ch1[right] = ch[right];
		printf("%s\n", ch1);
	
		Sleep(1000);
		left++;
		right--;//�������󣬵ݼ���
		system("cls");//������Ļ�������չ�ֹ��̣�ֱ����ʾ���
	}

	



	return 0;
}

int main(void)
{
	int data[20] = { 1,2,3,4,5,6,7,8 };
	int s = 6;
	int length = sizeof(data) / sizeof(data[0]);

	bool flag = false;//û�ҵ�

	for (int i = 0; i < length; i++)
	{
		if (s == data[i])
		{
			flag = true;//�ҵ�
			printf("�ҵ���");
            break;
		}
		
	}
	if (!flag)
		printf("û�ҵ�");
	return 0;
}

int main(void)
{


	int i = 0;
	int d[5] = { 1,2,3,4,5 };
	for (i = 0; i < 5; i++)
	{
		if (i == 4)
		{
			printf("%d\n", d[i]);
		}
		break;//������������ж��forѭ��������ִ��break;
	}
	return 0;
}

//
//���ֲ��ҷ������ֱ�������
//ÿ�β��ҽ����ݷ�Χ��Сһ�룬Ч�ʸ��ߣ������ʺϴ������ݲ���
//

int main(void)
{
	
	int left = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9 };//����
	int n =6;
	
	int right = sizeof(arr) / sizeof(arr[0])-1;
	bool found = false;
    int middle = (left + right) / 2;//�������⣬middleδ����ѭ���ڵĸ��£��޷���С��Χ��
	while (left <= right)//�����ж�
	{
		int middle = (left + right) / 2;
		
		if (arr[middle] < n)//Ŀ�����Ұ벿��
		{
			left = middle + 1;
		}
		else if (arr[middle] > n)//Ŀ������벿��
		{
			right = middle - 1;
		}
		else
		{
			printf("zhao dao le\n");
			found = true;//�ҵ�֮��ֵΪ1����֮��ȻΪfalse
			break;
		}
		
	}
	if (found==false)
		printf("meizhaodao");
	return 0;
}