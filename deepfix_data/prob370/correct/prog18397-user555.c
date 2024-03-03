#include<stdio.h>
int main() {
    int a,b,c,A,B,C;
    scanf("%d%d%d",&a,&b,&c);
    A=b*b+c*c-a*a;
    B=a*a+c*c-b*b;
    C=a*a+b*b-c*c;
    if((a+b<=c)||(a+c<=b)||(b+c<=a))
    printf("INVALID");
    else if((A<0)||(B<0)||(C<0))
    printf("OBTUSE");
    else if((A==0)||(B==0)||(C==0))
    printf("RIGHT");
    else
    printf("ACUTE");
    return 0; }