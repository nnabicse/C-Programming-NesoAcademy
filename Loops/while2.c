#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Integer: ");
    scanf("%d",&n);

    while(n!=0)
    {
        printf("Enter a Integer: ");
        scanf("%d",&n);
    }

    printf("Out of The Loop");
    return 0;
}
