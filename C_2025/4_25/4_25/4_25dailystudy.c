#define  _CRT_SECURE_NO_WARNINGS  //�궨��
#include <stdio.h>
#include <stdlib.h>

//typedef������ȡ����
 //typedef enum WEEK {day1 = 1,day2,day3} fw;//fwΪ�������֣���������enum WEEK��Ϊfw
//enum ö���� { ����1������2������3}
 typedef enum//ö��
 {
	 day1=1,
	 day2,
	 day3
 }fw;//������������

 //ָ����Լ���
int main(void)
{
	
	//type *p,ָ�붨�������ķ�ʽ
	fw DAYS = 1;
	int* p=0;//ָ���ŵ�ַ�ı��������Բٿص�ַ
	int a = 90;
	p = &a;//ָ��ָ��a�ĵ�ַ
	printf("%d\n", a);//90
	int w = *p;
	*p = 30;
	printf("%d\n",*p);//30
	printf("%d\r\n", DAYS);//1
	//getchar();
	int* u =  malloc(sizeof(int));//malloc�����ڴ�
	{
		if (p != NULL)
		{
			*u = 90;
			printf("%d", *u);
			free(u);//�ͷ��ڴ�
		}
	}

}
#define l 0

int main(void)
{
	



	return 0;
}