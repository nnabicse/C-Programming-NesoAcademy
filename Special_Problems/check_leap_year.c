#include<stdio.h>
int main()
{
    int year;
    printf("Input Year: ");
    scanf("%d",&year);

    if(year<0)
    {
        printf("Invalid Input");
    }
    else
    {
        if(year%100 == 0 && year%400!= 0)
        {
            printf("Not Leap Year");
        }
        else
        {
            if(year%4 == 0 || year%400 == 0)
                printf("Leap Year");
            else
            {
                printf("Not Leap Year");
            }

        }
    }
    return 0;
}
