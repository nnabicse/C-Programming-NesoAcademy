#include<stdio.h>

int main()
{
    int n,q,rem,fact=1,result=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    q  = n;

    while (q!=0)
    {
        rem = q%10;
        for(int i=1;i<=rem;i++)
        {
            fact = fact*i;
        }
        result = result+fact;
        fact = 1;
        q = q/10;
    }

    if(result == n)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }
    return 0;
}
