#include<stdio.h>

int fun1()
{
    printf("Nurun");
    return 1;
}

int fun2()
{
    printf("Nabi");
    return 1;
}

int main()
{
    int a;
    a = fun1() + fun2();
    printf("%d",a);
    return 0;
}
