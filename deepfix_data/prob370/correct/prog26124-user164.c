#include<stdio.h>
int main() {
    int a,b,c;
    int A,B,C;
    scanf("%d %d %d",&a,&b,&c);
    A=(b*b+c*c-a*a)/2*b*c;
    B=(c*c+a*a-b*b)/2*a*c;
    C=(a*a+b*b-c*c)/2*a*b;
    if((a+b<=c)||(b+c<=a)||(a+c<=b))
    printf("INVALID");
    else if((A>0)&&(B>0)&&(C>0))
    printf("ACUTE");
    else if((A==0)||(B==0)||(C==0))
    printf("RIGHT");
    else
    printf("OBTUSE");
    return 0; }