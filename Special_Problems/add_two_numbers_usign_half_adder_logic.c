#include<stdio.h>
int main()
{
    int a,b, sum, carry;
    printf("Enter First Number: "); scanf("%d",&a);
    printf("Enter Second Number: "); scanf("%d",&b);

    while (b!=0)

    {
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }
    printf("Sum = %d",a);
    return 0;
}
