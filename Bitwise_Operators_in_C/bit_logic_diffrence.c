#include<stdio.h>

int main()
{
    char x = 1, y = 2;

    if(x&y)
        printf("x&y is True");
    if (x&&y)
        printf("x&&y is True");

    return 0;

}
