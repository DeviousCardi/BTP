#include <stdio.h>
int main() {
    int a,b,c,g,e;
    scanf("%d%d%d", &a, &b, &c);
    g=a+b+c;
    e=a*b*c;
    printf("%d\n",g);
    printf("%d\n",e);
    float v;
    v=(a+b+c)/3.0;
    printf("%.3f",v);
    return 0; }