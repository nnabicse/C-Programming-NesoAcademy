#include<stdio.h>
int main()
{
    int n,q,rem,result=0,mul=1,count=0,cnt;

    printf("Enter Number: ");
    scanf("%d",&n);
    q=n;
    while(q!=0)
        {
            q=q/10;
            count++;
        }
    cnt=count;
    q=n;
    while(q!=0)
        {
            rem = q%10;
            while(cnt!=0)
            {
                mul = mul*rem;
                cnt--;
            }
            result = result+mul;
            cnt=count;
            mul=1;
            q=q/10;
        }
    if(result==n)
    {
        printf("Armstrong");

    }
    else
    {
        printf("Not Armstrong");
    }

}
