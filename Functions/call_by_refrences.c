#include<stdio.h>
int fun(int*,int*);
int main()
{
    int x=10,y=20;
    fun(&x,&y);
    printf(" %d  %d ",x,y);
}

int fun(int *ptr1, int *ptr2)
{
    *ptr1=20;
    *ptr2 = 10;
}
