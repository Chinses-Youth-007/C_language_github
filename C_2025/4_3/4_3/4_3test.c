#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>


//��ϰscanf������ȡ,c++.com���������
int main()
{
	int a, b = 0;
	while(scanf("%d%d", &a, &b)!=EOF)
	{//�˴�scanfֻ���ȡһ�����ݣ������������������Ҫ�õ�ѭ����������eofʱ����ֹͣ��ȡ��
		if (a > b)
		{
			printf("%d>%d", a, b);
		}
		else if (a < b)
		{
			printf("%d<%d", a, b);
		}
		else if (a == b)
		{
			printf("%d=%d", a, b);
		}
	}
	return 0;
}

//51֪ʶ��aboutC
//������ѧ
//ģ�黯���
//.h/.c/�ļ��ֿ�д������Ҫʹ�ú���ʱ��������Ӧͷ�ļ�
//#��ʽ  #ifndef__()_H_//��ֹ�ظ�����
//      #define __()_H_ 
//      ����������
//		#endif
//     ������������з���ֵ����Ҫѧ�ῼ�� 
///  long long int -2��63�η���2��63�η���һ��