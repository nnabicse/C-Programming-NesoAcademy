#include<stdio.h>

int areaofrect(int length,int weidth)
{
    int area;
    area = length*weidth;
    return area;
}

int main()
{
    int l=5,w=10,area;

    area = areaofrect(l,w);
    printf("Area is %d",area);
}
