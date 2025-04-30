#include <stdio.h>
int main(void)
    宏定义
{
#if 0
        printf("66");
#elif 1
    printf("333");
#endif
    getchar();
    return 0;

    预编译
#ifdef wad
    printf("333");
#endif
#ifndef wad   // 避免重复定义
#define wad 1 // 如果没有定义则运行这个语句
#endif
    int w = 2;
    printf("%d", w);
    getchar();
    return 0;
}