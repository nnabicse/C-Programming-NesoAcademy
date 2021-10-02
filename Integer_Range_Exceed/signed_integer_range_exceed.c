#include<stdio.h>

int main()
{
    int var1 = 2147483647;
    int var2 = 2147483648;
    int var3 = -2147483648;
    int var4 = -2147483649;

    printf("%d\n", var1);
    printf("%d\n", var2);
    printf("%d\n", var3);
    printf("%d\n", var4);

    return 0;
}

