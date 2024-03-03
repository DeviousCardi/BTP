#include <stdio.h>
int main() {
    int a,b,c,d;
    float e;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",a+b+c);
    printf("%d\n",a*b*c);
    d=(a+b+c)*1000/3;
    e=d/1000;
    printf("%f",e);
    return 0; }