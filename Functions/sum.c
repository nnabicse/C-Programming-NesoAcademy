#include<stdio.h>
int add(int,int);
int main()
{
    int a=50,b=30,sum;
    sum=add(a,b);
    printf("%d",sum);
}

int add(int var1,int var2)
{
    return(var1+var2);
}
