#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter Integer: ");
        scanf("%d",&n);
    }
    while(n!=0);
    printf("Out Of Loop");
    return 0;
}
