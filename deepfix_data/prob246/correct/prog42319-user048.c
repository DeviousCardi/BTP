#include <stdio.h>
int main() {
    int a,b,c,S,P;
    float A;
    scanf("%d%d%d",&a,&b,&c);
    S=a+b+c;
    P=a*b*c;
    A=(float)(a+b+c)/3;
    printf("%d\n%d\n%.3f\n",S,P,A);
    return 0; }