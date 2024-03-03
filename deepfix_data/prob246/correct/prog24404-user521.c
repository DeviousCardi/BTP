#include <stdio.h>
int main() {
    int a,b,c,d,e;
    float f;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    e=a*b*c;
    f=d/3;
    printf("sum=%d\n",d);
    printf("product=%d\n",e);
    printf("average=%.3f\n",f);
    return 0; }