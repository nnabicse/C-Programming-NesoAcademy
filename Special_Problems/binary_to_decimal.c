#include<stdio.h>

int main()
{
    int binary,rem, num, base=1,decimal=0;

    printf("Enter Binary: "); scanf("%d",&binary);
    num = binary;
    while(binary !=0)
    {
        rem = binary%10;
        decimal = decimal+rem*base;
        binary = binary/10;
        base = base*2;
    }
    printf("Decimal Is: %d",decimal);
    return 0;
}
