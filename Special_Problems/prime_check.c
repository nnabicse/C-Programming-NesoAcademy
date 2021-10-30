#include<stdio.h>

int main()
{
    int x,isprime=0;
    printf("Enter Number: "); scanf("%d",&x);

    for(int i=2;i<x;i++)
    {
        if (x%i==0)
            {
                isprime = 1;
                printf("True");
            }
            else
                printf("False");
        printf("%d\n",i);

    }

    if (isprime==0 && x>1)
    {
        printf("Prime Number");
    }
    else
        printf("Not Prime Number");
    return 0;
}
