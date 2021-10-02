#include<stdio.h>
#include<limits.h>

int main()
{
    int var1 = INT_MIN;
    int var2 = INT_MAX;

    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;

    short int var5 = SHRT_MIN;
    short int var6 = SHRT_MAX;

    short unsigned int var7 = 0;
    short unsigned int var8 = USHRT_MAX;

    long int var9 = LONG_MIN;
    long int var10 = LONG_MAX;

    long unsigned int var11 = 0;
    long unsigned int var12 = ULONG_MAX;

    printf("Range of signed integers is from: %d to %d\n",var1,var2);
    printf("Range of unsigned integers is from: %d to %u\n",var3,var4);
    printf("Range of Short signed integers is from: %d to %d\n",var5,var6);
    printf("Range of Short unsigned integers is from: %u to %u\n",var7,var8);
    printf("Range of Long signed integers is from: %ld to %ld\n",var9,var10);
    printf("Range of Long unsigned integers is from: %lu to %lu\n",var11,var12);

    return 0;
}
