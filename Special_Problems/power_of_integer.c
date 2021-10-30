#include<stdio.h>
int main()
{
    int base, exp, expo;
    float result=1;
    printf("Enter Base: "); scanf("%d",&base);
    printf("Enter Exponant: "); scanf("%d",&exp);
    expo = exp;
    if(expo>0)
    {
        while(expo!=0)
        {
            result = result*base;
            expo--;
        }
        printf("Power is: %.3f ",result);
    }
    else if(expo<0)
    {
        while(expo!=0)
        {
            result = result/base;
            expo++;
        }
        printf("Power is: %.3f ",result);
    }
    else
        printf("Invalid Input");
}
