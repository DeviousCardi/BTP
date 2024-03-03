#include <stdio.h>
int main() {
    int a,b,c,d;
    float e;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",a+b+c);
    printf("%d\n",a*b*c);
    e=(a+b+c)/3;
    d=e*1000;
    printf("%d",d);
    return 0; }