#include <stdio.h>
int main() {
    int a,b,c,S,P;
    float A;
    scanf("%d%d%d",&a,&b,&c);
    S=a+b+c;
    P=a*b*c;
    A=(a+b+c);
    printf("%d\n%d\n%.3f\n",S,P,(A/3));
    return 0; }