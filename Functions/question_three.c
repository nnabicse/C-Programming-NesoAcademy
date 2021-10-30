#include<stdio.h>
int func()
{
    static num = 16;
    return num--;

}

int main()
{
    for(func();func();func())
    {
        printf("%d",func());
    }
    return 0;
}
