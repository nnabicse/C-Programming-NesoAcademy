#include<stdio.h>
#include<math.h>
int main()
{
    int n,result = 0,reminder, quotient;
    printf("Enter Number: ");
    scanf("%d",&n);
    int order = printf("%d",n);

    quotient = n;

    while(quotient !=0)
    {
        reminder = quotient%10;
        result = result + pow(reminder,order);
        quotient = quotient/10;
    }

    printf("\n%d",result);

    if (result == n)
    {
        printf("\nArmstrong\n");
    }
    else
        printf("\nNot Armstrong\n");
}

