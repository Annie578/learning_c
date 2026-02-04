#include <stdio.h>
#include <limits.h>
int main(){
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    printf("SIGNED VARIABLES:%d TO %d",var1,var2);
    
    int var3 = 0;
    int var4 = UINT_MAX;
    printf("\nUNSIGNED VARIABLES :%u to %u\n",var3,var4);

    unsigned i = 1;
    int j = -4;
    printf("%u\n",i+j);
    print("j++ = %u\n",j++);

    int a;
    long b;
    long long c;
    short d;
    float e;
    double f;
    printf("%d\n %d\n %d\n %d\n %d\n %d\n",a,b,c,d,e,f);

    unsigned char x = 255;
    x = x+1;
    printf("%d\n",x);
    
    signed char y = 127;
    y = y+1;
    printf("%d",y);
    return 0;
}