#define  _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>
int main()
{   
	//ת�����\':ת��ԭ�з��ŵĺ���
	printf("%c", '\'');

	printf( "abc\r");//���ص���ͷ

	printf("\"");//��ӡ����˫����
	
	printf("c\test\tue\test");
	
	getchar();//�����϶�ȡ�ַ�
	
	printf("23456\b\b");//����getchar()�Ḳ�ǵ�5
	
	getchar();
	
	getchar();//���ƹ��λ��
	printf("abcdefg\rxyz");//����getchar()���Ḳ��a
	printf("%d", '\130');
	getchar();//ʹ���ص�aǰ��

	////��������
	#include <stdbool.h>
	bool flag = false;
	if (flag)
	{
		printf("1");
	}
	else
		printf("0");


	//sizeof�����ֽ��������Ҫ��ӡ�Ļ�����Ҫ��ʽΪ%zd//����ֵ�����޷��ţ�size_tΪ������
	
	//sizeof(����)

	int q = 900;
	printf("%zd\n", sizeof(q));
	printf("%zu\n", sizeof(q));
	printf("%zd\n", sizeof(2 + 3));//(���ͣ�
	printf("%zd\n", sizeof 3 + 3);//�����Ҽ��㣬4+3=7



	//�������� ȫ�ֱ���  �ֲ�����
	//ȫ�ֱ���ȫ�ֿ���   ֻ����Ӧ�Ĵ���ģ�������ã��ֲ���ȫ����ͬʱ�ͽ�ԭ��
	float  mner = 3.2;
	double dd = 9.89;

	short int q;
	long int a;
	long long int;

	//�������������ֿ�ͷ�����Ҳ��ܳ���63���ַ�
	// 
	//���͵��ֽ�������Ϊ��������ͬ�������졣


	//int<---->signed int
		  //char �������޷������������ء�




	


	return 0;
}
