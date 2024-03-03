#include <stdio.h>
int main() {
    int a,b,c,d,e;
    float f;
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    d=a+b+c;
    e=a*b*c;
    scanf("%.3f",&e);
    f=(a+b+c)/3;
    printf("%d,%d,%.3f",d,e,f);
    return 0; }