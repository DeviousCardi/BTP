#include <stdio.h>
int main() {
    int a,b,c,d,e;
    float f;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    e=a*b*c;
    f=d/3;
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%.3f\n",f);
    return 0; }