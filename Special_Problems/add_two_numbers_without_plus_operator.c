#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter First Number: "); scanf("%d",&x);
    printf("Enter Second Number: "); scanf("%d",&y);

    if(y>0)
    {
        while(y!=0)
        {
            x++;
            y--;
        }
    }
    else if (y<0)
    {
        while(y!=0)
        {
            x--;
            y++;
        }
    }
    printf("Final: %d\n",x);
}
