#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
int main()
{
	int a = (int)9.98;
	printf("%d\n", a);
	int m = 9.88;
	printf("%d\n", m);//ǿ������ת���ᶪʧ�������ݣ�8�ֽڵ����ݷŽ�����ĸ��ֽڵĿռ�

	int ch = getchar();//�����϶�ȡһ���ַ�
	putchar(ch);//�����ȡ���ַ�
	getchar();
	printf("%d\n", 6231);
	printf("%-8d", 6231);//-������룬+���Ҷ���
	getchar();
	printf("%8d", 6231);
	getchar();

	printf("%f\n", 45.55);
	printf("%10.3f", 45.55);//ռλ����
	getchar();

	//scanf����������


	int a = 0;
	int b = 0;
	float c = 0.0f;
	int m=scanf("%d %d %f", &a, &b, &c);//����ֵΪint����
	printf("%d %d %f\n", a, b, c);
	printf("%d", m);
	return 0;





	return 0;
}