#define  _CRT_SECURE_NO_WARNINGS  
�������
#include <stdio.h>
int main()
{
	int i = 0;
	double sum = 0;//�������֮��
	for(i=0;i<=100;i++)//�������������
	{
		if (i % 2 == 0)//ż��
		{
			sum = 1.0 / i;
		}
		if (i % 2 != 0)����
		{
			sum = -1.0 / i;
		}
	}
	printf("%f", sum);

	return 0;
}


//������������ݵ����ֵ����Сֵ֮��
#include <stdio.h>

#include <limits.h>//��ͷ�ļ����峣���������������ݵķ�Χ����������ϵͳ�ͱ������޷�ʵ�ֽ��д�С�Ƚϵ����ݡ�
int main()
{
	int num[10] = { 0 };//�����ʼ��
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&num[i]);//��ȡ��������ݣ���Ҫȡ��ַ
	}
	int max = num[0];//�������ֵ�����һ������
	int min = num[0];//������Сֵ�����һ������
	for (int i = 0; i <= 9; i++)//���бȽϱ������� �ҵ���ֵ
	{
		if (num[i] >max)
		{
			max = num[i];
		}
		if (num[i] < min)
		{  
			min = num[i];
		}
	}

	//��ӡ�������ֵ
	printf("%d\n", max-min);
	return 0;
}

