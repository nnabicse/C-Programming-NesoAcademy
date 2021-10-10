#include<stdio.h>

int main()
{
    int i=1024;
    int count = 0;
    for(;i;i>>=1)
    {
        printf("Hello World\n");
        count = count+1;
    }
    printf("%d Times Printed",count);
    return 0;
}
