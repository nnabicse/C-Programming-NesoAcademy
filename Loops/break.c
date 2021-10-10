#include<stdio.h>

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        if(n<0)
            break;
        printf("Enter Number: ");
        scanf("%d",&n);
    }

    return 0;
}
