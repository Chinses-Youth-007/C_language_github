#define  _CRT_SECURE_NO_WARNINGS  



#include <stdio.h>
//2!+1!+3!=9
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n<=3;n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d", sum);
//
//	return 0;
//}
//��δ����е�retû�в���ÿ��ѭ���е����û��� ��Ȼret�ͻ�ʹ����һ�����еõ��Ľ��
// ����ͨ�����Է�����������
//���Թ�����Ҫ�۲���������������� һ������С��Χ








//2!+1!+3!=9
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//��źͣ�������㣬���������������ֱ�ӱ����0
//	int sum = 0;
//	for (n = 1;n<=3;n++)
//	{
//		ret = 1;//ʹret��ÿ�μ��㲻ͬ���ֵĽ׳˵�ʱ���ܹ����ã�������һ�εĽ��Ӱ��
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;//���ÿһ�εĽ׳˽��
//	}
//	
//	printf("%d", sum);
//
//	return 0;
//}









//int main(void)
//{
//	
//	int n = 0;
//	int ret = 1;//��źͣ�������㣬���������������ֱ�ӱ����0
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		//ÿһ�ε�ret���õ�����ˢ��
//		ret = ret * n;
//		sum = sum + ret;
//
//
//	}
//	printf("%d", sum);
//
//	return 0;
//}//�������˳��������Ч��
//�������й����еĲ���



//#include <windows.h>
//int main(void)
//{
//
//    int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��������ַ�ӵ͵�ַ���ߵ�ַ
//	
//
//
//
//	for (i = 0; i <= 12; i++)//����ջ�������ջ����žֲ���������ʽ����
//							//ջ��ʹ���ڴ�Ӹߵ��ͽ���
//	{
//		arr[i] = i;
//		//printf("hahahaha\n");
//		printf("%p\n", arr[12]);
//		printf("%p", &i);
//		break;
//		Sleep(500);//˯�ߺ�������Ҫ����ͷ�ļ�windows.h
//	}
//}
////
//	printf("&arr[1]=%p\n", arr[1]);
//	printf("&i=%p", &i);
//
//
//	return 0;
//
//}

//
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
// ��ӡ���������ַ��������Ӵ��ڱ�����һ�����������ַӳ��
//	printf("&arr[1]=%p\n", &arr[1]);
//	printf("&arr[2]=%p\n", &arr[2]);
//	printf("&arr[3]=%p\n", &arr[3]);
//	printf("&arr[4]=%p\n", &arr[4]);
//	printf("&i=%p", &i);
//	return 0;
//




//�����ݹ�
//���»�С С���黯�� ֱ���������������
// �������Ľ׳� ��Ҫ֪�����Ľ׳ˣ�����Ľ׳���Ҫ֪��һ�Ľ׳�
//�ȵ��� ��ع�//�ع���ڴ��ͷţ������ڴ�й©


int nnn(n)
{
	if (n == 0)//��������
		return 1;
	else
		return  nnn(n - 1) * n;
}





int main(void)
{
	int n = 0;
	scanf("%d", &n);

	int ret = nnn(n);//ÿ����һ�κ����ͻ�ռ��ջ�����ڴ棬������ʹ�ڴ����

	printf("%d", ret);

	return 0;
}