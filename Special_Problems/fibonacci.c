#include<stdio.h>
int main()
{
    int n,result;
    int a=0,b=1;
    printf("Enter Number: ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
        printf("%d ",a);
        result = a+b;
        a=b;
        b=result;
    }
    return 0;
}
