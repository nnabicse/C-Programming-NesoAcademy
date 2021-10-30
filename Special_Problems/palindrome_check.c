#include<stdio.h>
int main()
{
    int num,result=0,reminder,quotient;

    printf("Enter Number: ");
    scanf("%d",&num);
    quotient = num;

    while(quotient!=0)
    {
        reminder = quotient%10;
        result = result*10+reminder;
        quotient = quotient/10;
    }

    if (result == num)
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");
    return 0;
}
