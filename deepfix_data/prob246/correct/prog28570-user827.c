#include <stdio.h>
int main() {
    int a,b,c,d;
    float e;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",a+b+c);
    printf("%d\n",a*b*c);
    e=(a+b+c)/3.0;
    d=e*1000;
    e=d/1000.0;
    printf("%2f",e);
    return 0; }