#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int main() {
    int a,b,c,x;
    scanf("%d",&x);
        a=x/5;
        b=(x-5*a)/3;
        c=(x-5*a-3*b);
        printf("%d %d %d",a,b,c);
    return 0; }