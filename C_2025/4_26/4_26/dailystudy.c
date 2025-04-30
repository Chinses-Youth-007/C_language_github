#define  _CRT_SECURE_NO_WARNINGS  
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d", a);
//	return 0;
//}
//相关调试过程及快捷键的使用。

#include <stdio.h>
int main(void)
// {
//     int i = 0;
//     for (i = 1; i < 10; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d*%d=%d", i, j, i * j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

{
    
    
    
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    
    int k = 0;
    while (k = m % n) // 9 6--3//3 %6=0
    {   
        m = n;
        n = k;
    }

    printf("%d", n);
    return 0;
}