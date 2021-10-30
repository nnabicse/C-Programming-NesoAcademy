#include<stdio.h>
int main()
{
    int number,divisor=0;
    printf("Enter Number: "); scanf("%d",&number);

    for(int i=1;i<6;i++)
    {
        if(number%i==0)
        {
            divisor = divisor+i;
        }
        else
            continue;
    }
    if(divisor==number)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}
